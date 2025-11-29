@class UIVisualEffectView, AWEIMBaseLabel, UILabel, UIButton;

@interface AWEIMShareLiveCardFreeTrialView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurEffectBackgroundView;
@property (nonatomic) unsigned long long freeTrialStyle;
@property (retain, nonatomic) UILabel *freeTrialFinishTitleLabel;
@property (retain, nonatomic) UILabel *freeTrialFinishSubtitleLabel;
@property (retain, nonatomic) AWEIMBaseLabel *statusLabel;
@property (retain, nonatomic) UIButton *button;

- (void)updateForStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
