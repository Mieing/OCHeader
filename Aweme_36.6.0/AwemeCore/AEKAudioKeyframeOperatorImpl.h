@class NLETrackSlot_OC;

@interface AEKAudioKeyframeOperatorImpl : AEKAudioClipOperatorImpl

@property (retain, nonatomic) NLETrackSlot_OC *hostSlot;
@property (retain, nonatomic) NLETrackSlot_OC *keyframe;

- (id)addOrUpdateKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forceAdd:(BOOL)a2;
- (id)addKeyframe:(id)a0;
- (id)keyframeOperators;
- (id)keyframeWithAttachmentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithTrack:(id)a0 slot:(id)a1 keyframe:(id)a2 baseData:(id)a3 subscriberProvider:(id)a4 coreUnit:(id)a5;
- (void).cxx_destruct;
- (id)remove;
- (id)keyframes;

@end
