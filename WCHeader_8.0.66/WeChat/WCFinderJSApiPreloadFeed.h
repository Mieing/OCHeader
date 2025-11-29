@class MMLRUCache, NSString, WCFinderJSApiPreloadFeedConfig, NSMutableArray;

@interface WCFinderJSApiPreloadFeed : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) MMLRUCache *caches;
@property (nonatomic) long long totalFetchCount;
@property (nonatomic) long long matchCount;
@property (retain, nonatomic) NSMutableArray *pendingTasks;
@property (nonatomic) long long pendingCount;
@property (retain, nonatomic) NSMutableArray *runningTask;
@property (retain, nonatomic) WCFinderJSApiPreloadFeedConfig *config;
@property (nonatomic) unsigned long long preFetchTime;
@property (nonatomic) BOOL invokeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invokePreloadFromParams:(id)a0 vc:(id)a1 callback:(id /* block */)a2 failback:(id /* block */)a3;
+ (id)preloadFeedFromVC:(id)a0;
+ (id)preloadFeedFromVC:(id)a0 config:(id)a1;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)preloadDataItemForEnryptId:(id)a0;
- (void)preloadFeed:(id)a0 complete:(id /* block */)a1;
- (void)tryNextFetch;
- (void)fetchFinishWithFailed:(id)a0;
- (void)onGetCommentDetailWithEncryptId:(id)a0 dataItem:(id)a1;
- (BOOL)isOnWifi;
- (void).cxx_destruct;

@end
