@class NSArray, NSString, NSMutableDictionary;

@interface AWEDCFeedInnerCacheConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long triggerType;
@property (retain, nonatomic) NSArray *disableAwemeTypeArray;
@property (nonatomic) long long videoNum;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) double scheduledRefreshTime;
@property (copy, nonatomic) NSString *requestMethod;
@property (nonatomic) BOOL usePB;
@property (nonatomic) long long cachePoolThreshold;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (nonatomic) unsigned long long loadCacheTiming;
@property (copy, nonatomic) id /* block */ realTimeRequestURLBlock;
@property (copy, nonatomic) id /* block */ realTimeParamsBlock;
@property (copy, nonatomic) id /* block */ realTimeHeaderBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
