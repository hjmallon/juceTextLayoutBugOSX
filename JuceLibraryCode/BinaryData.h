/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_41252721_INCLUDED
#define BINARYDATA_H_41252721_INCLUDED

namespace BinaryData
{
    extern const char*   licence_apache_2_0_txt;
    const int            licence_apache_2_0_txtSize = 10173;

    extern const char*   fonts__roboto_ttf;
    const int            fonts__roboto_ttfSize = 162876;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 2;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
