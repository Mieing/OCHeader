@class CAMediaTimingFunction;

@interface IESLIveDFSpringAnimationContext : IESLiveDFAnimationContext

@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) long long repeatCount;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic) BOOL bounce;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;

- (void).cxx_destruct;

@end
