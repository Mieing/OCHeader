@class MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfMainPageHeaderVIPAdapter : NSObject

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (readonly, nonatomic) BOOL shouldShow;

- (id)buildWithCoordinatorAndIsSingle:(BOOL)a0;
- (void)shopVipAction;
- (void).cxx_destruct;

@end
