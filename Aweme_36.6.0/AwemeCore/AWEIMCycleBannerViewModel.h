@class NSArray, NSString;

@interface AWEIMCycleBannerViewModel : NSObject

@property (readonly, nonatomic) unsigned long long bannerCount;
@property (readonly, nonatomic) NSArray *dataSourceArray;
@property (nonatomic) double autoPlayInterval;
@property (nonatomic) BOOL shouldAutoPlay;
@property (copy, nonatomic) NSString *enterFrom;

+ (double)bannerHeightWithWidth:(double)a0;

- (void)trackEvent:(id)a0 bannerIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupDataSource;

@end
