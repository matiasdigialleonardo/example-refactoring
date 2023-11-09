

// Code to refactor

// int getRating()
// {
//     return (moreThanFiveLateDeliveries()) ? 2 : 1;
// }
// boolean moreThanFiveLateDeliveries()
// {
//     return numberOfLateDeliveries > 5;
// }


// Refactored code

int getRating(int numberOfDeliveries)
{
    return numberOfDeliveries > 5 ? 2 : 1;
}