@class NSDictionary, NSString;

@interface AWEGrouponLocationCheckManager : NSObject

@property long long pageType;
@property (nonatomic) BOOL isTransformerCache;
@property (nonatomic) BOOL isFeedCache;
@property (nonatomic) long long pullType;
@property (retain, nonatomic) NSDictionary *locationSDKInfo;
@property (copy, nonatomic) NSString *cityBarShowTimestamp;
@property (copy, nonatomic) NSString *cityBarShowText;
@property (copy, nonatomic) NSString *cityBarLocationSource;

+ (id)sharedInstanceWithPageType:(long long)a0;

- (void)trackLocationMonitorOfHomepageRequestWithContext:(id)a0;
- (void)updateLocationSDKInfoWithModel:(id)a0;
- (void)updateCityBarShowTimestamp:(double)a0;
- (void)updateCityBarShowText:(id)a0;
- (long long)getCacheMode;
- (id)handleCityBarParamsWithPageType:(long long)a0;
- (void)trackEventOfLocationCheckMonitor:(id)a0 pageType:(long long)a1;
- (void)handleLocationInfoWithModel:(id)a0;
- (void)trackLocationMonitorOfCityBarWithSource:(id)a0 pageType:(long long)a1;
- (id)handleRomaParamsFromCityModel:(id)a0 pageType:(long long)a1;
- (void)updateLocalCacheStatus:(BOOL)a0 isTransformerCache:(BOOL)a1;
- (void)updatePullType:(long long)a0;
- (void).cxx_destruct;

@end
