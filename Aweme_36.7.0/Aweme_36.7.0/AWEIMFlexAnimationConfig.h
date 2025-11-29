@class CAMediaTimingFunction;

@interface AWEIMFlexAnimationConfig : NSObject

@property (nonatomic) unsigned long long option;
@property (nonatomic) BOOL useSpringAnimation;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double velocity;
@property (nonatomic) BOOL disableCellHeightAnimation;
@property (nonatomic) unsigned long long animationOptions;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)init;

@end
