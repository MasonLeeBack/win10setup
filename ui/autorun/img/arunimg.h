/*

Copyright (c) Microsoft Corporation
Reverse-engineered by github/masonleeback

*/

#ifndef _ARUNIMG_H_
#define _ARUNIMG_H_

// I haven't found ANY use cases for these yet, therefore,
// I haven't bothered implementing them. Not used in
// PE or windows. They're still included so spwizeng/autorun
// don't throw a fit. One day.
//
// In Windows 7, they used to be used. Not anymore AFAIK.
//
/*
#define IDB_200                    200
#define IDB_201                    201
#define IDB_202                    202
#define IDB_204                    204
#define IDB_205                    205
#define IDB_206                    206
#define IDB_210                    210
#define IDB_211                    211
#define IDB_212                    212
#define IDB_213                    213
#define IDB_214                    214
#define IDB_215                    215
#define IDB_506                    506
#define IDB_507                    507
#define IDB_509                    509
#define IDB_510                    510
*/

#define IDB_LOGO                   203
#define IDB_GOPRESSED              207
#define IDB_GONORMAL               208
#define IDB_GOHOVER                209

#define IDI_AUTORUN                214
#define IDI_WINDOWS                215

#endif // _ARUNIMG_H_
