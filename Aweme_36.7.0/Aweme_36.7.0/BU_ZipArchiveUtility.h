@class NSString;

@interface BU_ZipArchiveUtility : NSObject {
    NSString *_path;
    void *_zip;
}

+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 needRename:(BOOL)a3 password:(id)a4 error:(id *)a5 delegate:(id)a6;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 preserveAttributes:(BOOL)a2 overwrite:(BOOL)a3 needRename:(BOOL)a4 password:(id)a5 error:(id *)a6 delegate:(id)a7 progressHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 preserveAttributes:(BOOL)a2 overwrite:(BOOL)a3 needRename:(BOOL)a4 nestedZipLevel:(long long)a5 password:(id)a6 error:(id *)a7 delegate:(id)a8 progressHandler:(id /* block */)a9 completionHandler:(id /* block */)a10;
+ (BOOL)renameFileName:(id)a0 toNewName:(id)a1;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (id)_dateWithMSDOSFormat:(unsigned int)a0;
+ (id)_filenameStringWithCString:(const char *)a0 version_made_by:(unsigned short)a1 general_purpose_flag:(unsigned short)a2 size:(unsigned short)a3;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 compressionLevel:(int)a3 password:(id)a4 AES:(BOOL)a5 progressHandler:(id /* block */)a6;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 withPassword:(id)a3;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 withPassword:(id)a3 andProgressHandler:(id /* block */)a4;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 withPassword:(id)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1 withPassword:(id)a2;
+ (void)zipInfo:(struct { unsigned int x0; struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } x1; unsigned short x2; unsigned int x3; } *)a0 setAttributesOfItemAtPath:(id)a1;
+ (void)zipInfo:(struct { unsigned int x0; struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } x1; unsigned short x2; unsigned int x3; } *)a0 setDate:(id)a1;
+ (id)_gregorian;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 delegate:(id)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2;

- (BOOL)writeData:(id)a0 filename:(id)a1 compressionLevel:(int)a2 password:(id)a3 AES:(BOOL)a4;
- (BOOL)writeFile:(id)a0 withPassword:(id)a1;
- (BOOL)writeFileAtPath:(id)a0 withFileName:(id)a1 compressionLevel:(int)a2 password:(id)a3 AES:(BOOL)a4;
- (BOOL)writeFileAtPath:(id)a0 withFileName:(id)a1 withPassword:(id)a2;
- (BOOL)writeFolderAtPath:(id)a0 withFolderName:(id)a1 withPassword:(id)a2;
- (BOOL)close;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)open;
- (id)init;

@end
