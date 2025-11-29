@class MMTimer, UILabel;
@protocol WCFinderCountdownViewDelegate;

@interface WCFinderCountdownView : UIView

@property (retain, nonatomic) MMTimer *countdownTimer;
@property (retain, nonatomic) UILabel *countdownTips;
@property (nonatomic) long long curCountdownNum;
@property (nonatomic) long long countdownLimit;
@property (weak, nonatomic) id<WCFinderCountdownViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 countdownLimit:(long long)a1;
- (void)updateCountdownLimit:(long long)a0;
- (void)startCountdownAction;
- (void)updateCountTimer;
- (void)stopCountdownAction;
- (void).cxx_destruct;

@end
