@class UILabel, CAGradientLayer, UIView;

@interface IESLiveMultiKTVSingerProfileTagView : UIView

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CAGradientLayer *gradientBackgoundLayer;

- (void)setTagString:(id)a0;
- (void)setTagBgColor:(id)a0;
- (void)setBackgroundColorsARGBHexStr:(id)a0;
- (void)setupColorsARGBHexStr:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setTagColor:(id)a0;

@end
