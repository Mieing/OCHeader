@class NSString;

@interface SSZipArchive : NSObject {
    NSString *_path;
    void *_zip;
}

+ (BOOL)isFilePasswordProtectedAtPath:(id)a0;
+ (BOOL)isPasswordValidForArchiveAtPath:(id)a0 password:(id)a1 error:(id *)a2;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 delegate:(id)a2;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 error:(id *)a4 delegate:(id)a5;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 password:(id)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 preserveAttributes:(BOOL)a2 overwrite:(BOOL)a3 password:(id)a4 error:(id *)a5 delegate:(id)a6;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 preserveAttributes:(BOOL)a2 overwrite:(BOOL)a3 password:(id)a4 error:(id *)a5 delegate:(id)a6 progressHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 preserveAttributes:(BOOL)a2 overwrite:(BOOL)a3 nestedZipLevel:(long long)a4 password:(id)a5 error:(id *)a6 delegate:(id)a7 progressHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withFilesAtPaths:(id)a1 withPassword:(id)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 withPassword:(id)a2;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 withPassword:(id)a3;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 withPassword:(id)a3 andProgressHandler:(id /* block */)a4;
+ (BOOL)createZipFileAtPath:(id)a0 withContentsOfDirectory:(id)a1 keepParentDirectory:(BOOL)a2 compressionLevel:(int)a3 password:(id)a4 AES:(BOOL)a5 progressHandler:(id /* block */)a6;
+ (id)_filenameStringWithCString:(const char *)a0 size:(unsigned short)a1;
+ (void)zipInfo:(struct { unsigned int x0; unsigned short x1; unsigned int x2; } *)a0 setAttributesOfItemAtPath:(id)a1;
+ (void)zipInfo:(struct { unsigned int x0; unsigned short x1; unsigned int x2; } *)a0 setDate:(id)a1;
+ (id)_gregorian;
+ (id)_dateWithMSDOSFormat:(unsigned int)a0;

- (id)init;
- (id)initWithPath:(id)a0;
- (BOOL)open;
- (BOOL)writeFolderAtPath:(id)a0 withFolderName:(id)a1 withPassword:(id)a2;
- (BOOL)writeFile:(id)a0 withPassword:(id)a1;
- (BOOL)writeFileAtPath:(id)a0 withFileName:(id)a1 withPassword:(id)a2;
- (BOOL)writeFileAtPath:(id)a0 withFileName:(id)a1 compressionLevel:(int)a2 password:(id)a3 AES:(BOOL)a4;
- (BOOL)writeData:(id)a0 filename:(id)a1 withPassword:(id)a2;
- (BOOL)writeData:(id)a0 filename:(id)a1 compressionLevel:(int)a2 password:(id)a3 AES:(BOOL)a4;
- (BOOL)close;
- (void).cxx_destruct;

@end
