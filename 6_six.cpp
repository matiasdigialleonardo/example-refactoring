
// Code to refactor

// if ((platform.toUpperCase().indexOf("MAC") > -1) &&
// (browser.toUpperCase().indexOf("IE") > -1) &&
// wasInitialized() && resize > 0 ) {
// do something
// }

// Refactored code

bool isMac = platform.toUpperCase().indexOf("MAC") > -1;
bool isIe = browser.toUpperCase().indexOf("IE") > -1;
bool wasInitialized = wasInitialized();
bool isResized = resize > 0

if (isMac && isIe && wasInitialized && isResized)
{
    // do something
}


