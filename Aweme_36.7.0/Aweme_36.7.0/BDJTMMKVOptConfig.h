@class NSArray, NSDictionary;

@interface BDJTMMKVOptConfig : NSObject

@property (nonatomic) BOOL allMMKVCacheEnabled;
@property (nonatomic) BOOL preloadMMKVEnabled;
@property (nonatomic) BOOL collectEveryLaunchEnabled;
@property (nonatomic) float loadMMKVCostException;
@property (retain, nonatomic) NSArray *subThreadPreloadMMapIDs;
@property (retain, nonatomic) NSArray *subThreadPreloadPaths;
@property (retain, nonatomic) NSDictionary *preloadPriorityMap;
@property (nonatomic) float preloadScatterInterval;
@property (nonatomic) float preloadTaskMaxSec;
@property (nonatomic) BOOL lowPriorityPreloadOptEnabled;
@property (nonatomic) BOOL preloadOldVersionEnabled;

+ (id)setupWithDict:(id)a0;

- (id)formatConfigToDict;
- (long long)getMMKVPreloadPriority:(id)a0;
- (BOOL)isSubThreadCollectMMKVID:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
