@class CAGradientLayer, UILabel, UIView, UIButton;

@interface AWEGeneralPostLoadingProgressView : UIView

@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *loadingTipLabel;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *loadingFailLabel;
@property (retain, nonatomic) UILabel *loadingFailTipLabel;
@property (retain, nonatomic) UIButton *retryButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end
