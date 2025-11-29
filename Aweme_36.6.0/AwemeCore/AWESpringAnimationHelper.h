@class CADisplayLink;

@interface AWESpringAnimationHelper : NSObject

@property (retain, nonatomic) CADisplayLink *displaylink;
@property (nonatomic) double fromValue;
@property (nonatomic) double fullValue;
@property (nonatomic) double damping;
@property (nonatomic) long long numberOfnum;
@property (nonatomic) long long beginNum;
@property (copy, nonatomic) id /* block */ callbackValue;
@property (copy, nonatomic) id /* block */ completedBlock;

- (void)animationWithFromValue:(double)a0 toValue:(double)a1 damping:(double)a2 duration:(double)a3 callback:(id /* block */)a4 completedCallback:(id /* block */)a5;
- (id)animationWithFromValue:(double)a0 toValue:(double)a1 damping:(double)a2 duration:(double)a3;
- (void)displayLinkRun;
- (double)caculateMathValueWithValue:(double)a0 damping:(double)a1;
- (void).cxx_destruct;

@end
