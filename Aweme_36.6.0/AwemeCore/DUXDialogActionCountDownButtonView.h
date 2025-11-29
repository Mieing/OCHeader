@class NSTimer, DUXAlertDialogCountDownAction;

@interface DUXDialogActionCountDownButtonView : DUXDialogActionButtonView

@property (nonatomic) long long currentTime;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (copy, nonatomic) id /* block */ countDownEndAction;
@property (retain, nonatomic) DUXAlertDialogCountDownAction *model;

+ (id)actionButtonWithActionStyle:(unsigned long long)a0 model:(id)a1;

- (void)stopCountDown;
- (id)initWithActionStyle:(unsigned long long)a0 model:(id)a1;
- (void)countDownTimeAction;
- (void)setupCountDown;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
