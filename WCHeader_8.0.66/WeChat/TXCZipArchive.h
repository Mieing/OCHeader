@class NSString;
@protocol TXCZipArchiveDelegate;

@interface TXCZipArchive : NSObject {
    void *_zipFile;
    void *_unzFile;
}

@property (weak, nonatomic) id<TXCZipArchiveDelegate> delegate;
@property (copy, nonatomic) NSString *password;

- (void)dealloc;
- (BOOL)createZipFile2:(id)a0;
- (BOOL)createZipFile2:(id)a0 password:(id)a1;
- (BOOL)addFileToZip:(id)a0 newname:(id)a1;
- (BOOL)closeZipFile2;
- (BOOL)unzipOpenFile:(id)a0;
- (BOOL)unzipOpenFile:(id)a0 password:(id)a1;
- (BOOL)unzipFileTo:(id)a0 overWrite:(BOOL)a1;
- (BOOL)unzipCloseFile;
- (void)outputErrorMessage:(id)a0;
- (BOOL)overWrite:(id)a0;
- (void).cxx_destruct;

@end
