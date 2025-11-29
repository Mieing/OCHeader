@class DFKeyFrameInterval;

@interface IESLIveDFKeyFrameAnimationContext : IESLiveDFAnimationContext

@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) DFKeyFrameInterval *currentInterval;

- (void).cxx_destruct;

@end
