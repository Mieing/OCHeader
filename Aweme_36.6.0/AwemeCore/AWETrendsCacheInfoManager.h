@class NSMutableDictionary;

@interface AWETrendsCacheInfoManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *trendsCollectStatusCache;

+ (id)sharedInstance;

- (id)trendsCollectStatusForTrendsID:(id)a0;
- (void)trendCollectedStatusChangeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
