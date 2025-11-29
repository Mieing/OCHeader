@class NSString, NSArray, NSFileManager;

@interface TencenLBSZipArchive : NSObject {
    void *_zipFile;
    void *_unzFile;
    NSFileManager *_fileManager;
}

@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) id delegate;
@property (readonly, nonatomic) unsigned long long numFiles;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) long long compression;
@property (nonatomic) unsigned long long stringEncoding;
@property (readonly, nonatomic) NSArray *unzippedFiles;

- (id)init;
- (id)initWithFileManager:(id)a0;
- (void)dealloc;
- (BOOL)CreateZipFile2:(id)a0;
- (BOOL)CreateZipFile2:(id)a0 append:(BOOL)a1;
- (BOOL)CreateZipFile2:(id)a0 Password:(id)a1;
- (BOOL)CreateZipFile2:(id)a0 Password:(id)a1 append:(BOOL)a2;
- (BOOL)addFileToZip:(id)a0 newname:(id)a1;
- (BOOL)addDataToZip:(id)a0 fileAttributes:(id)a1 newname:(id)a2;
- (BOOL)CloseZipFile2;
- (BOOL)UnzipOpenFile:(id)a0;
- (BOOL)UnzipOpenFile:(id)a0 Password:(id)a1;
- (BOOL)UnzipFileTo:(id)a0 overWrite:(BOOL)a1;
- (id)UnzipFileToMemory;
- (BOOL)UnzipCloseFile;
- (id)getZipFileContents;
- (void)OutputErrorMessage:(id)a0;
- (BOOL)OverWrite:(id)a0;
- (id)Date1980;

@end
