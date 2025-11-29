@class AWEPlayInteractionGeneralActivityButton;

@interface AWEPlayInteractionGeneralActivityView : UIView

@property (retain, nonatomic) AWEPlayInteractionGeneralActivityButton *firstButton;
@property (retain, nonatomic) AWEPlayInteractionGeneralActivityButton *secondButton;
@property (copy, nonatomic) id /* block */ activityButtonPressBlock;

- (void)activityButtonPressed:(id)a0;
- (void)updateWithActivityButtonModel:(id)a0 delayShowTime:(long long)a1 videoDuration:(double)a2 context:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
