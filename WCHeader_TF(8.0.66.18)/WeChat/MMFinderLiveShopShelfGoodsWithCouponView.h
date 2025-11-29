@class NSString, MMFinderLiveShopShelfCouponsSimpleHeaderView, MMFinderLiveProductsTableView, MMFinderLiveTaskId, MMFinderLiveCouponItem;
@protocol MMFinderLiveShopShelfGoodsWithCouponViewDelegate;

@interface MMFinderLiveShopShelfGoodsWithCouponView : UIView <MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveShopShelfGoodsWithCouponViewDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveShopShelfCouponsSimpleHeaderView *headerView;
@property (retain, nonatomic) MMFinderLiveProductsTableView *tableView;
@property (retain, nonatomic) MMFinderLiveCouponItem *coupon;
@property (nonatomic) long long backMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskID:(id)a1 delegate:(id)a2;
- (void)layoutSubviews;
- (void)onHeaderViewBackButtonClicked;
- (void)setShopWindowItems:(id)a0 withCoupon:(id)a1;
- (void).cxx_destruct;

@end
