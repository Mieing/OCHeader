@class NSString, NSArray;

@interface AWENearbyLynxCardPreloadConfig : NSObject

@property (nonatomic) BOOL launchEnabled;
@property (nonatomic) BOOL grouponEnabled;
@property (nonatomic) BOOL isFristScreenCachePriority;
@property (nonatomic) long long firstScreenCacheCount;
@property (nonatomic) long long validDays;
@property (nonatomic) double preloadIntervalSeconds;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *transformerLynxConfig;
@property (copy, nonatomic) NSArray *feedLynxConfig;

- (void).cxx_destruct;

@end
