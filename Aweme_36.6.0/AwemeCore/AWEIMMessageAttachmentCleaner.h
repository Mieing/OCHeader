@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMMessageAttachmentCleaner : NSObject {
    struct unique_ptr<std::atomic_flag, std::default_delete<std::atomic_flag>> { struct atomic_flag *__ptr_; } p_hasMarkedToStart;
}

@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *jobList;
@property (readonly, nonatomic) long long fileLifetime;
@property (readonly, nonatomic) BOOL enableNilModTimeFilesWaitAndCleanOptimize;
@property (readonly, nonatomic) int cleanBatchSize;
@property (readonly, nonatomic) int taskInterval;
@property (readonly, nonatomic) int maxJobCount;
@property (nonatomic) int doneJobCount;
@property (nonatomic) int cleanedFileCount;

- (id)initWithUserID:(id)a0;
- (void)startCleanOnIdle;
- (void)p_trackCleanJobBegin;
- (void)p_trackCleanJobResult:(id)a0;
- (void)p_addInitJobToJobList;
- (void)p_cleanLoopStep;
- (void)p_runOnIdel:(id /* block */)a0;
- (id)p_JobOfRecordFirstRunIfNecessary;
- (id)p_JobOfRecursiveCleanSomeNilModTimeFilesIfNecessary;
- (id)p_JobOfRecursiveCleanSomeFilesWithType:(long long)a0;
- (id)p_JobOfCleanSomeNoRefrenceDBFilesIfNecessary;
- (id)p_firstRunTimestampOnDisk;
- (BOOL)p_setFirstRunTimestampOnDisk:(id)a0;
- (void)p_cleanNoRefrenceDBFiles;
- (BOOL)p_cleanSomeFilesWithType:(long long)a0;
- (id)p_querySomeFilesWithType:(long long)a0;
- (id)p_processFileLineAndRemoveFilesInDiskIfNecessary:(id)a0;
- (BOOL)p_deleteLinesInDBWithFileIDList:(id)a0;
- (id)p_firstRunTimestampOnDiskKey;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
