@class NSURL;
@protocol WXGRoamCustomDiskBaseLogicDelegate;

@interface WXGRoamCustomDiskBaseLogic : NSObject

@property (weak, nonatomic) id<WXGRoamCustomDiskBaseLogicDelegate> delegate;
@property (retain, nonatomic) NSURL *curURL;

- (void)deleteDirInner:(unsigned long long)a0 dirPath:(id)a1;
- (void)deleteFileInner:(unsigned long long)a0 filePath:(id)a1;
- (void)deleteFileListInner:(unsigned long long)a0 filePathList:(id)a1;
- (void)fileStreamWriteBeginInner:(unsigned long long)a0 remotePath:(id)a1;
- (void)fileStreamWriteEndInner:(unsigned long long)a0 context:(id)a1 buf:(id)a2;
- (void)fileStreamWriteInner:(unsigned long long)a0 context:(id)a1 buf:(id)a2;
- (void)fileStreamWriteOnceInner:(unsigned long long)a0 remotePath:(id)a1 buf:(id)a2;
- (void)getFileInfoInner:(unsigned long long)a0 filePath:(id)a1;
- (void)getFileInfoListInner:(unsigned long long)a0 parentPath:(id)a1 recursiveDepth:(int)a2;
- (void)getRoamDiskInfoInner:(unsigned long long)a0;
- (void)getDirsSizeAsync:(unsigned long long)a0 dirPaths:(id)a1;
- (void)createDirInner:(unsigned long long)a0 dirPath:(id)a1;
- (void)fileStreamReadInner:(unsigned long long)a0 context:(id)a1 readSize:(unsigned long long)a2;
- (void)fileStreamReadBeginInner:(unsigned long long)a0 remotePath:(id)a1 readSize:(unsigned long long)a2;
- (void)downloadFileInner:(unsigned long long)a0 processId:(long long)a1 remotePath:(id)a2 localPath:(id)a3;
- (void)uploadFileInner:(unsigned long long)a0 processId:(long long)a1 localPath:(id)a2 remotePath:(id)a3;
- (void).cxx_destruct;

@end
