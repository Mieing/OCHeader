@class NSString, MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfMainPageHeaderCouponsAdapter : NSObject <WCFinderLiveLogReportValueProvider>

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (readonly, nonatomic) BOOL shouldShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildWithCoordinatorAndIsSingle:(BOOL)a0;
- (id)finderLiveLogReportValueForKey:(id)a0;
- (void).cxx_destruct;

@end
