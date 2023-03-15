// FILE: IntSet.cpp - header file for IntSet class
//       Implementation file for the IntStore class
//       (See IntSet.h for documentation.)
// INVARIANT for the IntSet class:
// (1) Distinct int values of the IntSet are stored in a 1-D,
//     compile-time array whose size is IntSet::MAX_SIZE;
//     the member variable data references the array.
// (2) The distinct int value with earliest membership is stored
//     in data[0], the distinct int value with the 2nd-earliest
//     membership is stored in data[1], and so on.
//     Note: No "prior membership" information is tracked; i.e.,
//           if an int value that was previously a member (but its
//           earlier membership ended due to removal) becomes a
//           member again, the timing of its membership (relative
//           to other existing members) is the same as if that int
//           value was never a member before.
//     Note: Re-introduction of an int value that is already an
//           existing member (such as through the add operation)
//           has no effect on the "membership timing" of that int
//           value.
// (4) The # of distinct int values the IntSet currently contains
//     is stored in the member variable used.
// (5) Except when the IntSet is empty (used == 0), ALL elements
//     of data from data[0] until data[used - 1] contain relevant
//     distinct int values; i.e., all relevant distinct int values
//     appear together (no "holes" among them) starting from the
//     beginning of the data array.
// (6) We DON'T care what is stored in any of the array elements
//     from data[used] through data[IntSet::MAX_SIZE - 1].
//     Note: This applies also when the IntSet is empry (used == 0)
//           in which case we DON'T care what is stored in any of
//           the data array elements.
//     Note: A distinct int value in the IntSet can be any of the
//           values an int can represent (from the most negative
//           through 0 to the most positive), so there is no
//           particular int value that can be used to indicate an
//           irrelevant value. But there's no need for such an
//           "indicator value" since all relevant distinct int
//           values appear together starting from the beginning of
//           the data array and used (if properly initialized and
//           maintained) should tell which elements of the data
//           array are actually relevant.

#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

// IntSet() initializes the size
IntSet::IntSet()
{
    used = 0;
} // end intSet()


// returns the size of the array
int IntSet::size() const
{
    return used;
} // end size()


// returns true if the size of used is 0
bool IntSet::isEmpty() const
{
    return (used == 0);
} // end isEmpty()


// loop through the array checking for anInt. If anInt is present then return true
bool IntSet::contains(int anInt) const
{
    if (used == 0)
        return false;

    int i = 0;

    while (i < used)
    {
        if (data[i] == anInt)
            return true;
        i++;
    } // end of while

} // end contains()


// will return false if otherIntset doesn't
// contain the same elements
bool IntSet::isSubsetOf(const IntSet& otherIntSet) const
{
    for(int i = 0; i < size(); i++)
    {
        if (!otherIntSet.contains(data[i]))
            return false;
    }
    return true;

} // end isSubsetOf()


// already implemented ... DON'T change anything
void IntSet::DumpData(ostream& out) const
{
    if (used > 0)
    {
        out << data[0];
        for (int i = 1; i < used; i++)
            out << "  " << data[i];
    }
} // end of DumpData


// unionWith() will check If unionSet doesn't contain element
// from otherIntset then add that element to unionSet
IntSet IntSet::unionWith(const IntSet& otherIntSet) const
{
    assert(size() + (otherIntSet.subtract(*this)).size() <= MAX_SIZE); // make sure array size is less than
                                                                                 // the MAX_SIZE
    IntSet unionSet = *this; // set unionSet to *this pointer

    for (int i = 0; i < otherIntSet.size(); i++) // iterate through array
    {
        if (!unionSet.contains(otherIntSet.data[i]))
        {
            unionSet.add(otherIntSet.data[i]);
        }
    } // end of for loop

    return unionSet;

} // end unionWith()


// intersect() will loop through *this then remove elements
// that are not duplicates in otherIntSet
IntSet IntSet::intersect(const IntSet& otherIntSet) const
{
    IntSet intersect = *this;      // set intersect to *this pointer

    for (int i = 0; i < otherIntSet.size(); i++)
        if (!otherIntSet.contains(otherIntSet.data[i]))
        {
            intersect.remove(otherIntSet.data[i]);
        } // end for loop

    return intersect;

} // end of intersect()


// subtract() iterate through array and subtract values that are same in otherIntSet
IntSet IntSet::subtract(const IntSet& otherIntSet) const
{
    IntSet difference = *this;

    for (int i = 0; i < otherIntSet.size(); i++)
    {
        if(otherIntSet.contains(otherIntSet.data[i]))
        {
            difference.remove(otherIntSet.data[i]);
        }
    } // end of for loop

    return difference;

} // end of subtract


// reset() will reset the array to 0
void IntSet::reset()
{
    used = 0;
} // end of reset()


// add() will add anInt by checking the array size, and if anInt already exists
// if both are valid it will return true to add anInt
bool IntSet::add(int anInt)
{
    bool addInt = false;
    bool valid = false;

    if (used < MAX_SIZE)
    {
        valid = !(contains(anInt));
    }
    if (valid)
    {
        data[used] = anInt;
        used++;
        addInt = true;
    }
    return addInt;

} // end of add()


// remove() will check if anInt is in the array and if so will remove the
// element and push the remaining elements to the left by one index
bool IntSet::remove(int anInt)
{
    if(contains(anInt))
    {
        for(int i =0; i < used; i++)
        {
            if(data[i] == anInt)
            {
                for(int j = i; j < used; j++)
                {
                    data[i] = data[j+1];
                }
                used--;
                return true;
            } // end of nested if statement
        } // end of for loop
    } // end of if statement
    return false;

} // end remove()


// equal() checks if both sets are sub sets of one another. If so
// then they are equal to each other and it will return true
bool equal(const IntSet& is1, const IntSet& is2)
{
    if(is1.isSubsetOf(is2) && is2.isSubsetOf(is1))
    {
    return true;
    }
    else
        return false;

} // end of equal
