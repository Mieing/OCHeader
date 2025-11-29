@class UIImageView, WCFinderFeedContentVM, UILabel, UIView;

@interface WCFinderTipBarView : WCFinderCommonBottomBannerView

@property (retain, nonatomic) UILabel *topTipsBarLabel;
@property (retain, nonatomic) UIView *rightTipView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTipsBarText:(id)a0;
- (void)updateTipsBarText:(id)a0 tipBarUIStyle:(unsigned long long)a1;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (void)updateContentWithLeftTitle:(id)a0 rightInfoView:(id)a1 showRightArrow:(BOOL)a2;
- (void)onClickTipBarView;
- (void).cxx_destruct;

@end
