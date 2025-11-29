@class NSTimer;

@interface CGVibrator : NSObject

@property (nonatomic) long long timing;
@property (nonatomic) long long repeat;
@property (nonatomic) BOOL force;
@property (retain, nonatomic) NSTimer *vibrateTimer;
@property (nonatomic) double startTimeInterval;

- (void)startVibrate;
- (id)initWithTiming:(long long)a0 repeat:(long long)a1 force:(BOOL)a2;
- (id)initWithTiming:(long long)a0 repeat:(long long)a1;
- (void)stopVibrate;
- (void).cxx_destruct;

@end
