@class NSString;

@interface ZipArchive : NSObject {
    void *_zipFile;
    void *_unzFile;
    NSString *_unzipFilePath;
    NSString *_password;
}

@property (nonatomic) id delegate;

- (id)init;
- (void)dealloc;
- (BOOL)CreateZipFile2:(id)a0;
- (BOOL)CreateZipFile2:(id)a0 Password:(id)a1;
- (BOOL)addSingleFileToZip:(id)a0 fileNameInZip:(id)a1;
- (BOOL)addFileToZip:(id)a0 newname:(id)a1;
- (BOOL)CloseZipFile2;
- (BOOL)UnzipOpenFile:(id)a0;
- (BOOL)UnzipOpenFile:(id)a0 Password:(id)a1;
- (BOOL)UnzipFileTo:(id)a0 overWrite:(BOOL)a1;
- (BOOL)UnzipHasRelativeDir:(BOOL *)a0;
- (BOOL)UnzipLocateFile:(id)a0;
- (BOOL)UnzipGoToNextFile;
- (BOOL)UnzipGoToFirstFile;
- (BOOL)UnzipGetCurrentFileName:(id *)a0 retIsDirectory:(BOOL *)a1 retFileLength:(unsigned long long *)a2;
- (BOOL)UnzipCurrentFileWithPosition:(unsigned int)a0 length:(unsigned int)a1 retData:(id *)a2;
- (BOOL)UnzipCloseFile;
- (void)OutputErrorMessage:(id)a0;
- (BOOL)OverWrite:(id)a0;
- (id)Date1980;
- (void).cxx_destruct;

@end
