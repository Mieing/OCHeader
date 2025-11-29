@class UILabel, NSString, UIView;

@interface AWELPPToSpeedControlTipsView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSString *tips;

- (void)updateProgressViewFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;

@end
