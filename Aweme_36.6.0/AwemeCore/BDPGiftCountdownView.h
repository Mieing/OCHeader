@class UILabel, NSTimer;
@protocol BDPGiftCountdownDelegate;

@interface BDPGiftCountdownView : UIView

@property (weak, nonatomic) id<BDPGiftCountdownDelegate> delegate;
@property (retain, nonatomic) UILabel *countdownText;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long countdownTime;

- (void)invalidTimer;
- (long long)getRestCountDownTime;
- (void)terminateCountdown;
- (id)initWithDelegate:(id)a0 countdownTime:(long long)a1;
- (void)countdownEnded;
- (id)p_transformCountdownTime:(long long)a0;
- (void)p_updateCountdownText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;
- (void)startCountdown;

@end
