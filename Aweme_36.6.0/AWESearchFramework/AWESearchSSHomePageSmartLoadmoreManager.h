@interface AWESearchSSHomePageSmartLoadmoreManager : NSObject

+ (BOOL)enableSmartLoadmore;
+ (BOOL)enableSpeedSmartLoadmore;
+ (BOOL)enableAfterSearchSpeedSmartLoadmore;
+ (double)smartLoadMorePreLoadDistanceForSpeed:(double)a0;
+ (id)SSHomepageScrollSpeedSmartLoadmoreConfig;
+ (id)smartLoadMoreIOSRules;

- (void)triggerWithConfigParams:(id)a0 completion:(id /* block */)a1;

@end
