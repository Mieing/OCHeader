@protocol IESSCVideoTransition, IESSCAudioTransition;

@interface IESSCTransition : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) id<IESSCVideoTransition> videoTransition;
@property (retain, nonatomic) id<IESSCAudioTransition> audioTransition;

- (void).cxx_destruct;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
