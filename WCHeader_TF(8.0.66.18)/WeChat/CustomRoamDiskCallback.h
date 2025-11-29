@interface CustomRoamDiskCallback : NSObject {
    struct CustomRoamDiskDispatcherBridgeObjcImpl { void /* function */ **x0; struct CustomRoamDiskDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct CustomRoamDiskDispatcherBridgeObjcImpl { void /* function */ **x0; struct CustomRoamDiskDispatcherCallback *x1; id x2; } *)a0;
- (void)onInitializeComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDeviceErrorEvent:(int)a0 msg:(id)a1;
- (void)onUninitComplete:(unsigned long long)a0 err:(int)a1;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)a0 err:(int)a1 info:(id)a2;
- (void)onGetFileInfoListComplete:(unsigned long long)a0 err:(int)a1 fileInfoList:(id)a2;
- (void)onGetFileInfoComplete:(unsigned long long)a0 err:(int)a1 fileInfo:(id)a2;
- (void)onGetDirsSizeComplete:(unsigned long long)a0 error:(int)a1 dirSize:(id)a2;
- (void)onDeleteFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDeleteFileListComplete:(unsigned long long)a0 overallErr:(int)a1 errList:(id)a2;
- (void)onCreateDirComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDeleteDirComplete:(unsigned long long)a0 err:(int)a1;
- (void)onUploadFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onUploadFileProgressEvent:(unsigned long long)a0 unitSize:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onDownloadFileComplete:(unsigned long long)a0 err:(int)a1;
- (void)onDownloadFileProgressEvent:(unsigned long long)a0 unitSize:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onFileStreamWriteOnceComplete:(unsigned long long)a0 err:(int)a1;
- (void)onFileStreamWriteBeginComplete:(unsigned long long)a0 err:(int)a1 context:(id)a2;
- (void)onFileStreamWriteComplete:(unsigned long long)a0 err:(int)a1;
- (void)onFileStreamWriteEndComplete:(unsigned long long)a0 err:(int)a1;
- (void)onFileStreamReadBeginComplete:(unsigned long long)a0 err:(int)a1 context:(id)a2 buf:(id)a3;
- (void)onFileStreamReadComplete:(unsigned long long)a0 err:(int)a1 buf:(id)a2;

@end
