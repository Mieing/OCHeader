@class NSString, WAFileSpaceTraceLogic, NSObject;
@protocol OS_dispatch_queue;

@interface WACacheFileCleanMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    WAFileSpaceTraceLogic *_fileTraceLogic;
}

@property unsigned long long scanPhase;
@property unsigned long long maxTotalFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportOneFileSize:(unsigned long long)a0 appId:(id)a1;
- (void)reportAllFileSizeOnOpenWeApp:(id)a0;
- (void)addTempFileStatWithPath:(id)a0 appID:(id)a1;
- (void)removeTempFileStatWithFileSize:(unsigned long long)a0 appID:(id)a1;
- (void)setupMaxTotalFileSize;
- (BOOL)isTotalFileSizeExceed;
- (BOOL)isTempFileSizeExceedForApp:(id)a0 withFileSize:(unsigned long long)a1;
- (BOOL)isSingleAppTempSizeExceedSize:(unsigned long long)a0 appId:(id)a1;
- (BOOL)isTotalFileSizeExceedHalfMax;
- (void)asyncScanFiles;
- (void)asyncCleanFilesWithCompletion:(id /* block */)a0;
- (void)asyncCleanFilesForApp:(id)a0;
- (void)asyncCleanFilesToMakeEnoughSpaceForAppId:(id)a0 completion:(id /* block */)a1;
- (id)statusFilePath;
- (void)loadStatus;
- (void)saveStatus;
- (unsigned long long)currentTotalFileSize;
- (void)addFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withAppID:(id)a2;
- (void)removeFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withAppID:(id)a2;
- (void)setTotalFileSize:(unsigned long long)a0 totalFileNum:(unsigned int)a1 contentModifyTime:(unsigned int)a2 scanTime:(unsigned int)a3 withAppID:(id)a4;
- (void)removeItemAndUpdateTotalSize:(id)a0;
- (id)allAppIDInStatus;
- (id)appItemInStatus:(id)a0;
- (unsigned long long)tempFileSizeOfAppId:(id)a0;
- (id)arrSortAppItemFromStatus;
- (void)workThread_scanFiles;
- (void)innerScanFiles;
- (id)scanRootDir;
- (void)removeAppItemNotHasFolder:(id)a0;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)a0 tempDirPath:(id)a1;
- (void)workthread_cleanGlobalFilesWithCompletion:(id /* block */)a0;
- (void)workthread_cleanFilesForApp:(id)a0;
- (void)workthread_cleanFilesToMakeEnoughSpaceForAppId:(id)a0 completion:(id /* block */)a1;
- (BOOL)isWeAppRunning:(id)a0;
- (unsigned int)getModifyTimeWithPath:(id)a0;
- (void)fileStatWithPath:(id)a0 getCreateTime:(unsigned int *)a1 modifyTime:(unsigned int *)a2 fileSize:(unsigned long long *)a3;
- (id)subFolderNamesWithPath:(id)a0;
- (void)scanFolder:(id)a0 getTotalFileSize:(unsigned long long *)a1 totalFileNum:(unsigned int *)a2;
- (void)onAppTaskTerminate:(id)a0;
- (void).cxx_destruct;

@end
