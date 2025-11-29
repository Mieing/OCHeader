@class NSTimer, MMUILabel;

@interface MJShootCountdownView : MMUIView

@property (retain, nonatomic) MMUILabel *countdownLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (double)MJMapCountdownTimerMode:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)showCountdownWithTimerMode:(unsigned long long)a0 cancellationHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)cancelCountdown;
- (void)updateCountdownLabelContent;
- (void)startTimer;
- (void)stopTimer;
- (void)updateCountdown;
- (void)dismissCountdownLabelWithCompletionHandler:(id /* block */)a0;
- (void)swapCountdownLabelWithOutStageCompletionHandler:(id /* block */)a0 inStageCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
