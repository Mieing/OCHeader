@class NSArray;

@interface AWEGrouponTaskRefreshTabsInfo : AWEBaseApiModel

@property (nonatomic) long long refreshCountdown;
@property (retain, nonatomic) NSArray *refreshTabIds;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
