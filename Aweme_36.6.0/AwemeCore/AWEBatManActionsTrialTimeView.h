@class UILabel;
@protocol AWEBatManActionsTrialTimeViewDelegate;

@interface AWEBatManActionsTrialTimeView : UIView

@property (weak, nonatomic) UILabel *trialTimeLbl;
@property (weak, nonatomic) id<AWEBatManActionsTrialTimeViewDelegate> delegate;

- (void)updateTrialTime:(unsigned long long)a0 isUnlimited:(BOOL)a1;
- (void)onTimeBtnClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
