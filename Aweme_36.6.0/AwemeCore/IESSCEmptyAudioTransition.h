@class NSString;

@interface IESSCEmptyAudioTransition : NSObject <IESSCAudioTransition>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (void)applyPreviousAudioMixInputParameters:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)applyNextAudioMixInputParameters:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void).cxx_destruct;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)init;

@end
