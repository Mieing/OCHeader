@class MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfMainPageHeaderCouponsAdapter, NSArray, UIView, MMFinderLiveShopShelfMainPageHeaderVIPAdapter;

@interface MMFinderLiveShopShelfMainTableHeaderView : UIView

@property (retain, nonatomic) UIView *vipView;
@property (retain, nonatomic) UIView *couponsView;
@property (retain, nonatomic) MMFinderLiveShopShelfMainPageHeaderVIPAdapter *vipAdapter;
@property (retain, nonatomic) MMFinderLiveShopShelfMainPageHeaderCouponsAdapter *couponsAdapter;
@property (readonly, nonatomic) NSArray *itemViews;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCoordinator;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reportExpose;
- (void)reportCouponsViewExpose;
- (void)reportVIPViewExpose;
- (void).cxx_destruct;

@end
