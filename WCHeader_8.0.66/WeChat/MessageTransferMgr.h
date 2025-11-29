@class OpenCdnTransfer, RecordTransfer, NSMutableDictionary, MemoryMappedKV, NSString, FileUploadingTransfer;

@interface MessageTransferMgr : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) MessageTransferMgr *shared;

@property (readonly, nonatomic) OpenCdnTransfer *openCdnTransfer;
@property (readonly, nonatomic) FileUploadingTransfer *fileUploadingTransfer;
@property (readonly, nonatomic) RecordTransfer *recordTransfer;
@property (retain, nonatomic) NSMutableDictionary *taskList;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (retain, nonatomic) OpenCdnTransfer *openCdnTransfer;
@property (retain, nonatomic) FileUploadingTransfer *fileUploadingTransfer;
@property (retain, nonatomic) RecordTransfer *recordTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTaskToDisk:(id)a0;
- (void)removeTaskFromDisk:(id)a0;
- (BOOL)restoreTaskFromDisk:(id)a0;
- (void)setupAdapters;
- (id)taskForId:(id)a0;
- (void)onTaskCreate:(id)a0;
- (void)onTaskStart:(id)a0;
- (void)onTaskStop:(id)a0;
- (void)onTask:(id)a0 progressChanged:(int)a1;
- (void)onTaskCompleted:(id)a0 error:(id)a1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;

@end
