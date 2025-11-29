@class DownloadGlobalParameters, AWEResourcePreloadSchedule, NSString, AWEStorage, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AWETrafficDegrader : NSObject <AWEResourcePreloadScheduleDelegate>

@property (nonatomic) int rate;
@property (nonatomic) int totalSize;
@property (nonatomic) int degradedTotalSize;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) DownloadGlobalParameters *downloadParameters;
@property (nonatomic) BOOL shouldDownload;
@property (nonatomic) long long scence;
@property (nonatomic) unsigned long long degradationNetwork;
@property (retain, nonatomic) AWEResourcePreloadSchedule *schedule;
@property (nonatomic) unsigned long long backgroundTempTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)onHandleEventsForBackgroundURLSession;
- (void)resourcePreloadScheduleStateDidChange:(id)a0;
- (id)resourcePreloadScheduleQueue;
- (void)degradeIfNeeded;
- (void)_degradeWithOptions:(id)a0;
- (void)_degradeWithScence:(long long)a0;
- (void)_updateDegradeInfo;
- (void)_updateDegradeSize;
- (void)_trackDegradeInfo;
- (void)_endBackgroundUpdateTask;
- (void)_startDownloadInBackground;
- (void)_clear;
- (void).cxx_destruct;
- (id)init;
- (void)_start;
- (void)_updateRate;

@end
