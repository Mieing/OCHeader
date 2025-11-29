@class UIImageView, MMUIView, UIScrollView, MMUILabel;

@interface MMLocationAccuracyAuthorizationTipView : MMUIView

@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIView *sepLineView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (double)defaultTipHeight;
- (double)defaultTipHeightWithBottomInset:(double)a0;
- (double)contentHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutSepLineView;
- (void)layoutIconView;
- (void)layoutTipLabel;
- (void)layoutArrowView;
- (void)onTappedContent:(id)a0;
- (void)goToSettingLocationAuthorization;
- (void)observeScrollview:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateSepLineHidden;
- (void).cxx_destruct;

@end
