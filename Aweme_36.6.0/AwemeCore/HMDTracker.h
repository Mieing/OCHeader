@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface HMDTracker : HeimdallrModule {
    NSObject<OS_dispatch_source> *_timer;
    double _startTimestamp;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) double refreshInterval;
@property (nonatomic) unsigned long long insertIndex;
@property (nonatomic) BOOL hasNewData;
@property (retain, nonatomic) NSLock *lock;

+ (id)getLastSceneIfAvailable;
+ (id)getOperationTraceIfAvailable;
+ (id)getMultiScenesIfAvailable;
+ (void)asyncActionOnTrackerQueue:(id /* block */)a0;
+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (void)cleanupWithConfig:(id)a0;
- (void)didCollectOneRecord:(id)a0 async:(BOOL)a1;
- (void)didCollectOneRecord:(id)a0 async:(BOOL)a1 trackerBlock:(id /* block */)a2;
- (void)updateRecordWithConfig:(id)a0;
- (void)flushRecord:(id)a0 async:(BOOL)a1 trackerBlock:(id /* block */)a2;
- (void)checkUploadStatus:(int)a0 passed:(BOOL)a1 otherInfo:(id)a2;
- (void)flush:(BOOL)a0 trackerBlock:(id /* block */)a1;
- (void)scheduleTimerWithInterval:(double)a0;
- (void)flushWithTrackerBlock:(id /* block */)a0;
- (long long)dbMaxSize;
- (void)didCollectOneRecord:(id)a0;
- (void)didCollectOneRecord:(id)a0 trackerBlock:(id /* block */)a1;
- (void)dropAllRecordFromMemoryCacheOrDatabase;
- (void)performanceDataSaveImmediately;
- (void)performanceActionOnTrackerAsyncQueue:(id /* block */)a0;
- (void)setupWithHeimdallr:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)flushAsync;

@end
