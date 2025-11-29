@class NSTimer;

@interface CSJNumerAnimationLabel : UILabel

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long startNumber;
@property (nonatomic) long long endNumber;
@property (nonatomic) double animationParameter;
@property (nonatomic) double durationTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double startAnimationTime;

- (void)p_updateNumebr;
- (void)animationStartFromNumber:(long long)a0 toNumber:(long long)a1 duration:(double)a2;
- (void).cxx_destruct;

@end
