@class UILabel, NSTimer;

@interface IESLiveProphetCountdownView : UIView

@property (retain, nonatomic) UILabel *labelCounter;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (nonatomic) long long counter;
@property (copy, nonatomic) id /* block */ countdownFinishBlock;

- (void)startCountdown:(long long)a0;
- (void).cxx_destruct;
- (void)updateLabel;
- (void)invalidateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)countDown;

@end
