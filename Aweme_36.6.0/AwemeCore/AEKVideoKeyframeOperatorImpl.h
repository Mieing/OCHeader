@class NLETrackSlot_OC;

@interface AEKVideoKeyframeOperatorImpl : AEKVideoClipOperatorImpl

@property (retain, nonatomic) NLETrackSlot_OC *hostSlot;
@property (retain, nonatomic) NLETrackSlot_OC *keyframe;

- (id)syncFrom:(id)a0;
- (id)syncFrom:(id)a0 mode:(unsigned long long)a1;
- (id)addOrUpdateKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forceAdd:(BOOL)a2;
- (id)addKeyframe:(id)a0;
- (id)keyframeOperators;
- (id)keyframeWithAttachmentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithType:(unsigned long long)a0 track:(id)a1 slot:(id)a2 keyframe:(id)a3 baseData:(id)a4 subscriberProvider:(id)a5 coreUnit:(id)a6;
- (void).cxx_destruct;
- (id)remove;
- (long long)index;
- (id)keyframes;

@end
