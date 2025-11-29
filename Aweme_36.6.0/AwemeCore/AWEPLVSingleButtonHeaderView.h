@class UIImageView, UILabel, AWEPLVSingleButtonHeaderButtonView, UIView;

@interface AWEPLVSingleButtonHeaderView : UICollectionReusableView

@property (nonatomic) unsigned long long headerType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEPLVSingleButtonHeaderButtonView *button;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) id /* block */ tapButtonBlk;
@property (retain, nonatomic) UIView *containerView;

+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })a0;

- (void)setButtonFontSize:(long long)a0;
- (void)handleTapButton;
- (void)updateTitleIcon:(id)a0;
- (void)updateViewForBreakPoint;
- (void)updateButtonText:(id)a0;
- (void)updateButtonIcon:(id)a0;
- (void)configHeaderType:(unsigned long long)a0;
- (void)configButtonAction:(id /* block */)a0;
- (void)updateViewMargin:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTitleFontSize:(long long)a0;
- (void)updateTitle:(id)a0;

@end
