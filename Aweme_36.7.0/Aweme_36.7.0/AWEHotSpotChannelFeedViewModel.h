@class NSArray, NSDictionary, NSMutableSet, NSError, NSString;

@interface AWEHotSpotChannelFeedViewModel : NSObject

@property (retain, nonatomic) NSMutableSet *preloadMonitorSet;
@property (nonatomic) unsigned long long dataPreloadType;
@property (copy, nonatomic) NSDictionary *preloadLogExtra;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ completionBlockFromSelf;
@property (copy, nonatomic) NSArray *dataList;
@property (retain, nonatomic) NSError *fetchError;
@property (nonatomic) unsigned long long loadMoreCount;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL shouldUseCacheAweme;
@property (nonatomic) BOOL hasFetchCache;
@property (nonatomic) BOOL didFetchCache;
@property (copy, nonatomic) NSArray *cacheAwemes;
@property (copy, nonatomic) id /* block */ fetchCacheCompletion;
@property (nonatomic) BOOL hasCacheAwemeStartPlay;
@property (nonatomic) long long cacheConsumeStatus;
@property (nonatomic) BOOL initFetchFinish;
@property (nonatomic) BOOL hasReportRequest;
@property (nonatomic) BOOL hasRequestedBefore;
@property (copy, nonatomic) NSString *pushInsertedAwemeIDs;
@property (nonatomic) BOOL needTrackPushInsertedAweme;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) id /* block */ reloadFeedBlock;
@property (copy, nonatomic) id /* block */ insertFailedToastBlock;

- (void)monitorChannelPreloadWithMonitorType:(unsigned long long)a0 extra:(id)a1;
- (void)reloadFeed;
- (void)trackPushInsertedVideoWithRequestParams:(id)a0 firstAid:(id)a1;
- (void).cxx_destruct;

@end
