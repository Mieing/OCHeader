@class NSString, NSMutableSet;

@interface MMFinderLiveAudienceCouponsView : MMFinderLiveCouponsView <MMFinderLiveShopShelfCouponsTableContainerDelegate, MMFinderLiveCouponViewDelegate>

@property (retain, nonatomic) NSMutableSet *exposedCouponIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskID:(id)a0 shopShelfCoordinator:(id)a1 delegate:(id)a2;
- (void)updateWithCoordinator;
- (void)onActionButtonClicked:(id)a0 view:(id)a1;
- (void)onRestrictIconClicked:(id)a0;
- (id /* block */)actionForReportButtonActionWithIsReceiveFailForCoupon:(id)a0;
- (void)willDisplayCellForModel:(id)a0;
- (void).cxx_destruct;

@end
