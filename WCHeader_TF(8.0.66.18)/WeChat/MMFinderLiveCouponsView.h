@class MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfCouponsTableContainerView, NSString, MMFinderLiveTaskId;
@protocol MMFinderLiveCouponsViewDelegate;

@interface MMFinderLiveCouponsView : UIView <MMFinderLiveShopShelfCouponsTableContainerDelegate>

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *shopShelfCoordinator;
@property (retain, nonatomic) MMFinderLiveShopShelfCouponsTableContainerView *containerView;
@property (weak, nonatomic) id<MMFinderLiveCouponsViewDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskID:(id)a0 shopShelfCoordinator:(id)a1 delegate:(id)a2;
- (id)cellViewModelsBy:(id)a0;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithCoordinator;
- (void).cxx_destruct;

@end
