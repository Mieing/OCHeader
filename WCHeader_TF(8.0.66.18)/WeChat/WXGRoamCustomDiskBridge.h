@class CustomRoamDiskCallback, AffRoamCommonDeviceInfo, WXGRoamCustomDiskBaseLogic, NSURL, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WXGRoamCustomDiskBridge : NSObject <CustomRoamDiskBase, WXGRoamCustomDiskBaseLogicDelegate>

@property (retain, nonatomic) CustomRoamDiskCallback *diskCb;
@property (retain, nonatomic) AffRoamCommonDeviceInfo *deviceInfo;
@property (retain, nonatomic) WXGRoamCustomDiskBaseLogic *processLogic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue;
@property (retain, nonatomic) NSMutableArray *transferQueuePool;
@property (retain, nonatomic) NSURL *curURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)initializeAsync:(unsigned long long)a0 commonInfo:(id)a1 specialInfoPb:(id)a2;
- (void)uninitAsync:(unsigned long long)a0;
- (void)getRoamDiskInfoAsync:(unsigned long long)a0;
- (void)getFileInfoListAsync:(unsigned long long)a0 parentPath:(id)a1 recursiveDepth:(int)a2;
- (void)getFileInfoAsync:(unsigned long long)a0 filePath:(id)a1;
- (void)deleteFileAsync:(unsigned long long)a0 filePath:(id)a1;
- (void)deleteFileListAsync:(unsigned long long)a0 filePathList:(id)a1;
- (void)createDirAsync:(unsigned long long)a0 dirPath:(id)a1;
- (void)getDirsSizeAsync:(unsigned long long)a0 dirPaths:(id)a1;
- (void)deleteDirAsync:(unsigned long long)a0 dirPath:(id)a1;
- (void)uploadFileAsync:(unsigned long long)a0 invokeId:(unsigned long long)a1 localPath:(id)a2 remotePath:(id)a3;
- (void)downloadFileAsync:(unsigned long long)a0 invokeId:(unsigned long long)a1 remotePath:(id)a2 localPath:(id)a3;
- (void)fileStreamWriteOnceAsync:(unsigned long long)a0 remotePath:(id)a1 buf:(id)a2;
- (void)fileStreamWriteBeginAsync:(unsigned long long)a0 remotePath:(id)a1;
- (void)fileStreamWriteAsync:(unsigned long long)a0 context:(id)a1 buf:(id)a2;
- (void)fileStreamWriteEndAsync:(unsigned long long)a0 context:(id)a1 buf:(id)a2;
- (void)fileStreamReadBeginAsync:(unsigned long long)a0 remotePath:(id)a1 readSize:(unsigned long long)a2;
- (void)fileStreamReadAsync:(unsigned long long)a0 context:(id)a1 readSize:(unsigned long long)a2;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)a0 err:(int)a1 info:(id)a2;
- (void)onGetFileInfoComplete:(unsigned long long)a0 err:(int)a1 fileInfo:(id)a2;
- (void)onGetFileInfoListComplete:(unsigned long long)a0 err:(int)a1 fileInfoList:(id)a2;
- (void)onGetDirsSizeComplete:(unsigned long long)a0 error:(int)a1 dirSize:(id)a2;
- (void)onDeleteFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDeleteFileListComplete:(unsigned long long)a0 overallErr:(int)a1 errList:(id)a2;
- (void)onCreateDirComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDeleteDirComplete:(unsigned long long)a0 err:(int)a1;
- (void)onUploadFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onUploadFileProgressEvent:(long long)a0 unitSize:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onDownloadFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDownloadFileProgressEvent:(long long)a0 unitSize:(unsigned long long)a1 total:(unsigned long long)a2;
- (void).cxx_destruct;

@end
