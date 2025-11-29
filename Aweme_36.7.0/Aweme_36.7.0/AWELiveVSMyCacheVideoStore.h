@class NSString, NSDictionary, AWELiveVSCacheVideoTracker, NSIndexPath, NSMutableArray;

@interface AWELiveVSMyCacheVideoStore : NSObject <IESVSVideoCacheServiceDelegate>

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL showNetworkAlert;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSDictionary *models;
@property (retain, nonatomic) AWELiveVSCacheVideoTracker *tracker;
@property (nonatomic) BOOL isFirstShowTracked;
@property (nonatomic) BOOL isViewDidAppeared;
@property (nonatomic) long long networkStatus;
@property (retain, nonatomic) NSMutableArray *waitingTasks;
@property (retain, nonatomic) NSMutableArray *downloadingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseAllTasks;
- (void)trackWithKey:(id)a0 model:(id)a1;
- (void)resumeAllTasks;
- (id)cacheModelAtIndexPath:(id)a0;
- (void)deleteItemAtIndexPath:(id)a0;
- (void)pauseDownloadWithModel:(id)a0;
- (void)startDownloadWithModel:(id)a0;
- (void)p_receiveHTSLiveReachabilityChangedNotification:(id)a0;
- (void)p_setExtraInitWithModel:(id)a0;
- (void)p_trackModelsDownloadStatusShow;
- (void)p_updateDownloadTask:(id)a0;
- (void)p_updateDownloadTask:(id)a0 withProgress:(float)a1 netSpeed:(float)a2;
- (void)videoCacheService:(id)a0 didStartWithDownloadTask:(id)a1;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 stateDidChange:(long long)a2;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 didCompleteWithError:(id)a2;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 timeInterval:(double)a3 currentProgress:(double)a4;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)dealloc;
- (id)titleForSection:(long long)a0;

@end
