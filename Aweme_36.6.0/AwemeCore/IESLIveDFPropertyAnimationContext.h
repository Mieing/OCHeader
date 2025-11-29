@class IESLiveDFBezierPath, CAMediaTimingFunction;

@interface IESLIveDFPropertyAnimationContext : IESLiveDFAnimationContext

@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) long long repeatCount;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (retain, nonatomic) IESLiveDFBezierPath *bezierPath;
@property (nonatomic) BOOL isReverse;

- (void).cxx_destruct;

@end
