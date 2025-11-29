@class FinderShopShelfTopGuideBar, NSDictionary, UIView;
@protocol MMFinderLiveShopShelfHeaderGuideBarDelegate;

@interface MMFinderLiveShopShelfHeaderGuideBar : UIView

@property (retain, nonatomic) UIView *guideLayout;
@property (retain, nonatomic) UIView *centerLayout;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *bottomCornerView;
@property (weak, nonatomic) id<MMFinderLiveShopShelfHeaderGuideBarDelegate> delegate;
@property (retain, nonatomic) FinderShopShelfTopGuideBar *guideInfo;
@property (retain, nonatomic) NSDictionary *reportParams;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;
- (void)layoutSubviews;
- (double)calculateContainerHeight;
- (struct CGSize { double x0; double x1; })calculateLayoutSize:(id)a0;
- (void)refreshGuideLayoutWithInfo:(id)a0 headerView:(id)a1 liveTask:(id)a2;
- (void)onGuideBarDisplay;
- (void)handleGuideLayoutTap:(id)a0;
- (id)createItemView:(id)a0;
- (double)getMarginForView:(id)a0;
- (unsigned long long)getPositionForView:(id)a0;
- (void).cxx_destruct;

@end
