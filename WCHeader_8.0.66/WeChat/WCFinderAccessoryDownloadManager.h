@class NSObject, NSMutableSet, WCFinderAccessoryDownloadHeap;
@protocol OS_dispatch_queue;

@interface WCFinderAccessoryDownloadManager : NSObject

@property (retain, nonatomic) WCFinderAccessoryDownloadHeap *waittingHeap;
@property (retain, nonatomic) NSMutableSet *downloadTaskSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskSetQueue;
@property (nonatomic) BOOL isPaused;

- (void)startDownloadIfNeeded;
- (void)addDownloadTask:(id)a0;
- (void)addDownloadtasks:(id)a0;
- (void)removeDownloadTaskWithIdentifierKey:(id)a0;
- (void)removeAllDownloadTasksWithGroupId:(id)a0;
- (void)removeAllDownloadTasks;
- (void)pauseAllDownloadTasks;
- (void)resumeAllDownloadTasks;
- (void)changeDownloadTaskWithIdentifierKey:(id)a0 toPriority:(long long)a1;
- (void)addTaskToHeap:(id)a0;
- (void).cxx_destruct;

@end
