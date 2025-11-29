@class NSString, MBFileSpaceTraceLogic, NSObject;
@protocol OS_dispatch_queue;

@interface MBCacheFileCleanMgr : MMUserService <MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    MBFileSpaceTraceLogic *_fileTraceLogic;
}

@property unsigned long long scanPhase;
@property unsigned long long maxTotalFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addTempFileStatWithPath:(id)a0 bizName:(id)a1;
- (void)removeTempFileStatWithFileSize:(unsigned long long)a0 bizName:(id)a1;
- (unsigned long long)tempFileSizeOfBizName:(id)a0;
- (BOOL)isTempFileSizeExceedForBiz:(id)a0 withFileSize:(unsigned long long)a1;
- (void)removeItemAndUpdateTotalSize:(id)a0;
- (void)setupMaxTotalFileSize;
- (BOOL)isTotalFileSizeExceed;
- (BOOL)isSingleAppTempSizeExceedSize:(unsigned long long)a0 bizName:(id)a1;
- (BOOL)isTotalFileSizeExceedHalfMax;
- (void)asyncScanFiles;
- (void)asyncCleanFilesWithCompletion:(id /* block */)a0;
- (void)asyncCleanFilesForApp:(id)a0;
- (void)asyncCleanFilesToMakeEnoughSpaceForBizName:(id)a0 completion:(id /* block */)a1;
- (id)statusFilePath;
- (void)loadStatus;
- (void)saveStatus;
- (unsigned long long)currentTotalFileSize;
- (void)addFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withBizName:(id)a2;
- (void)removeFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withBizName:(id)a2;
- (void)setTotalFileSize:(unsigned long long)a0 totalFileNum:(unsigned int)a1 contentModifyTime:(unsigned int)a2 scanTime:(unsigned int)a3 withBizName:(id)a4;
- (id)allBizNameInStatus;
- (id)bizItemInStatus:(id)a0;
- (id)arrSortBizItemFromStatus;
- (void)workThread_scanFiles;
- (void)innerScanFiles;
- (id)scanRootDir;
- (void)removeBizItemNotHasFolder:(id)a0;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)a0 tempDirPath:(id)a1;
- (void)workthread_cleanGlobalFilesWithCompletion:(id /* block */)a0;
- (void)workthread_cleanFilesForApp:(id)a0;
- (void)workthread_cleanFilesToMakeEnoughSpaceForBizName:(id)a0 completion:(id /* block */)a1;
- (BOOL)isBizRunning:(id)a0;
- (unsigned int)getModifyTimeWithPath:(id)a0;
- (void)fileStatWithPath:(id)a0 getCreateTime:(unsigned int *)a1 modifyTime:(unsigned int *)a2 fileSize:(unsigned long long *)a3;
- (id)subFolderNamesWithPath:(id)a0;
- (void)scanFolder:(id)a0 getTotalFileSize:(unsigned long long *)a1 totalFileNum:(unsigned int *)a2;
- (void)onBizPause:(id)a0;
- (void)onBizDestory:(id)a0;
- (void).cxx_destruct;

@end
