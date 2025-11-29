@class NSArray, NSString;

@interface TAVTimeRangeTimeEffect : NSObject <TAVTimeEffectProtocol>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSArray *effects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSpeedEffectWithSpeed:(float)a0;
- (void)addReverseEffect;
- (void)addLoopEffectWithLoopCount:(unsigned long long)a0;
- (id)applyTimeEffectToClips:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })additionalDurationAfterApplyEffect;
- (void).cxx_destruct;

@end
