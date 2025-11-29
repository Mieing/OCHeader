@class NSTimer;
@protocol BDCTVideoRecordCountdownLabelDelegate;

@interface BDCTVideoRecordCountdownLabel : UILabel

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long countSeconds;
@property (nonatomic) long long initialSeconds;
@property (weak, nonatomic) id<BDCTVideoRecordCountdownLabelDelegate> countdownDelegate;

- (void)startCountdownWithTime:(long long)a0;
- (void)resetCountdown;
- (void)updateCountdown;
- (void).cxx_destruct;
- (void)startTimer;
- (void)updateLabel;
- (void)stopCountdown;

@end
