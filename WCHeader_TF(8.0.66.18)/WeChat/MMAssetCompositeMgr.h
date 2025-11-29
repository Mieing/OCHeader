@class NSString, OrderedDictionary;
@protocol MMAssetCompositeTaskProtocol;

@interface MMAssetCompositeMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long currentMgrState;
@property (retain) OrderedDictionary *taskListMap;
@property (retain, nonatomic) id<MMAssetCompositeTaskProtocol> currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genErrorForCode:(long long)a0;
+ (void)saveBackupAsset:(id)a0 andCrop:(BOOL)a1 forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 withMaxSizeMB:(long long)a3 resultBlock:(id /* block */)a4;
+ (void)_saveBackupAssetByCopyWithAVAsset:(id)a0 assetUrl:(id)a1 maxSizeLimitMB:(long long)a2 resultBlock:(id /* block */)a3;
+ (void)_saveBackupAssetByExportWithAVAsset:(id)a0 assetUrl:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 resultBlock:(id /* block */)a3;
+ (BOOL)deleteBackupAssetFileForShortName:(id)a0;
+ (long long)getAssetBackupDirSizeByte;
+ (id)findBackupAssetFilePathForShortName:(id)a0;
+ (unsigned long long)preGetAssetBackupDirSize;
+ (unsigned long long)deleteAssetBackupDir;
+ (id)_getAssetBackupDirPath;
+ (id)_convertBackupAssetFilePathFromShortName:(id)a0;
+ (id)_ensureBackupAssetFilePathForShortName:(id)a0 withError:(id *)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)_clear;
- (BOOL)addTask:(id)a0;
- (BOOL)_addTask:(id)a0;
- (void)removeTaskOfId:(id)a0;
- (id)getCacheTaskFromTaskID:(id)a0;
- (long long)getTaskQueueCount;
- (id)getQueueTaskIDs;
- (void)_enqueue;
- (id)_popFirstTask;
- (id)_detachTaskOfId:(id)a0;
- (void)_NEWSTATE_onTaskPending:(id)a0;
- (void)_NEWSTATE_onTaskInterrupted:(id)a0;
- (void)_NEWSTATE_onTaskDetached:(id)a0;
- (void)_NEWSTATE_onTaskPicked:(id)a0;
- (void)_NEWSTATE_onTask:(id)a0 finishedWithResult:(id)a1 compositeSession:(id)a2;
- (void)_NEWSTATE_onTaskQueueIdle;
- (Class)_findCompositorClassForTask:(id)a0;
- (void)_updateState:(long long)a0;
- (BOOL)_isNewStateValid:(long long)a0;
- (BOOL)_isWorking;
- (BOOL)_isDestroyed;
- (void).cxx_destruct;

@end
