@class MMUIButton, UIButton, UIView;
@protocol MMDropDownHalfScreenViewDelegate;

@interface MMDropDownHalfScreenExpandView : MMUIView {
    double m_maxHalfScreenHeight;
}

@property (nonatomic) double navigationBarHeight;
@property (retain, nonatomic) UIView *blurBgView;
@property (nonatomic) BOOL isShowingExpandView;
@property (retain, nonatomic) UIView *expandViewContainerView;
@property (retain, nonatomic) UIView *expandBottomView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIButton *bgMaskView;
@property (retain, nonatomic) UIView *detailViewMaskView;
@property (retain, nonatomic) UIView *detailView;
@property (nonatomic) BOOL isHideSetupGradientEffect;
@property (nonatomic) double halfScreenHeight;
@property (nonatomic) double marginWidth;
@property (nonatomic) double datailViewCornerRadius;
@property (weak, nonatomic) id<MMDropDownHalfScreenViewDelegate> expandViewDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationBarHeight:(double)a1;
- (void)initDropDownHalfScreenExpandViewData;
- (void)initDropDownHalfScreenExpandView;
- (void)layoutSubviews;
- (void)showHalfScreenExpandViewWithAnimated:(BOOL)a0;
- (void)hideHalfScreenExpandViewWithAnimated:(BOOL)a0;
- (void)setMaxHalfScreenHeight:(double)a0;
- (double)getMaxHalfScreenHeight;
- (double)currentExpandNavBarHeight;
- (double)getHalfScreenDetailViewMarginTop;
- (double)getHalfScreenDetailViewMarginButtom;
- (double)getMixedViewHeight;
- (double)getDetailViewAnimateInitTop;
- (void)setUpScrollViewGradientLayer;
- (void)hiddenUpScrollViewGradientLayer;
- (BOOL)checkUpScrollViewGradientLayer;
- (void)showExpandViewWithAnimated:(BOOL)a0;
- (void)showExpandViewWithAnimatedCore:(BOOL)a0;
- (void)hideExpandViewWithAnimated:(BOOL)a0;
- (void)onCloseExpandButtonClick;
- (void)onMaskBgClick;
- (void)expandNavBarHeight:(double)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)expandNavBarHeight:(double)a0 animated:(BOOL)a1 showExpandView:(BOOL)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;

@end
