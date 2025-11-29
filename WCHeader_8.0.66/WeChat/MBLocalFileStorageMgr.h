@class NSString, MBFileSpaceTraceLogic, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MBLocalFileStorageMgr : MMUserService <MBFileSpaceTraceLogicScanDataSource, MMServiceProtocol> {
    MBFileSpaceTraceLogic *_usrFileTraceLogic;
    NSObject<OS_dispatch_queue> *_fileTraceQueue;
    unsigned long long _usrFileTraceScanFrequency;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicFileStorageInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFileTraceLogic;
- (BOOL)isScanning;
- (void)addUsrFileStatWithFilePath:(id)a0 bizName:(id)a1;
- (void)asyncScanFile;
- (void)addUsrFileStatWithDirectory:(id)a0 bizName:(id)a1;
- (void)addUsrFileStatWithFileSize:(unsigned long long)a0 bizName:(id)a1;
- (void)removeUsrFileStatWithFileSize:(unsigned long long)a0 bizName:(id)a1;
- (void)removeUsrItemAndUpdateTotalSize:(id)a0;
- (unsigned long long)usrFileSizeOfbizName:(id)a0;
- (void)saveStatus;
- (id)bizNamesThatHaveDirectoryWithPrefix:(id)a0;
- (id)directoryOfBizName:(id)a0 prefix:(id)a1;
- (unsigned long long)scanIntervalWithPrefix:(id)a0;
- (void)checkAndClearUsrStoreAndStorageData;
- (unsigned long long)getUsrStoreDataSpaceWithBizName:(id)a0;
- (void)clearUsrSpaceOfBizName:(id)a0;
- (void)clearStoreSpaceOfBizName:(id)a0;
- (void)insertIntoSortedArray:(id)a0 withItem:(id)a1;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBizDestory:(id)a0;
- (id)getQueue;
- (id)getFileStorageInfoWithBizName:(id)a0;
- (id)usrRealPath:(id)a0 bizName:(id)a1 error:(id *)a2;
- (id)readFileDataWithBizName:(id)a0 localID:(id)a1 fromPosition:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;
- (id)workthread_readFileDataWithAppID:(id)a0 localID:(id)a1 fromPosition:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;
- (id)writeFileDataWithBizName:(id)a0 localID:(id)a1 isAppend:(BOOL)a2 data:(id)a3;
- (id)workthread_writeFileDataWithBizName:(id)a0 localID:(id)a1 isAppend:(BOOL)a2 data:(id)a3;
- (BOOL)haveFreeSpace:(id)a0 writeSize:(long long)a1 localID:(id)a2 error:(id *)a3;
- (id)saveFileWithBizNama:(id)a0 tempPath:(id)a1 usrLocalID:(id)a2;
- (id)workThread_saveFileWithBizName:(id)a0 tempPath:(id)a1 usrLocalID:(id)a2;
- (id)unzipForNative:(id)a0 filePath:(id)a1 targetDirectory:(id)a2;
- (id)unzipWithBizName:(id)a0 localID:(id)a1 targetDirectory:(id)a2;
- (id)workThread_unzipWithBizName:(id)a0 filePath:(id)a1 targetDirectory:(id)a2;
- (BOOL)moveFolderFiles:(id)a0 intoFolder:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
