@class AWEHotListDataController, NSError, AWEAwemeResponseModel;

@interface AWEAwemePrefetchFeedManager : NSObject

@property (retain, nonatomic) AWEHotListDataController *hotDataController;
@property (retain, nonatomic) AWEAwemeResponseModel *prefetchResponseModel;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long prefetchState;
@property (nonatomic) BOOL hasPreFetch;

+ (id)sharedInstance;

- (BOOL)enablePrefetch;
- (id)innerPrefetchConfig;
- (void)prefetchFeedReally;
- (id)prefetchFeedConfig;
- (void)prefetchFeedIfNeeded;
- (void).cxx_destruct;
- (void)reset;

@end
