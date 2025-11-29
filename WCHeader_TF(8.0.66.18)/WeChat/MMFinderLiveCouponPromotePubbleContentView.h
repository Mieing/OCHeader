@class NSString, FinderShopCouponInfo, MMFinderLiveCouponView, MMFinderLiveCouponItem;

@interface MMFinderLiveCouponPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveCouponViewDelegate, MMFinderLiveCouponItemObserver>

@property (retain, nonatomic) MMFinderLiveCouponView *couponView;
@property (retain, nonatomic) FinderShopCouponInfo *couponInfo;
@property (retain, nonatomic) MMFinderLiveCouponItem *couponItem;
@property (nonatomic) BOOL willDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)onCouponDidUpdate:(id)a0;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)onClosed;
- (void)onShowed;
- (void)handleSingleTapGesture:(id)a0;
- (void)layoutCouponView;
- (void)onActionButtonClicked:(id)a0 view:(id)a1;
- (void)onCouponAction:(id)a0 view:(id)a1;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
