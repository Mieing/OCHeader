@interface LVKeyframeUtil : NSObject

+ (id)genVolumeKeyframeParamsString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (id)genChromaKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (id)genFilterKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (id)genAdjustKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0 materialType:(int)a1;
+ (id)genPartFilterKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (id)genPartAdjustKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0 materialType:(int)a1;
+ (id)genTextKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1;
+ (id)genStickerKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1;
+ (long long)transformSourceTimeToTargetTime:(long long)a0 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1;
+ (long long)transformTargetTimeToResourceTime:(long long)a0 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1;
+ (id)genCurveTransformerForSpeedMaterial:(struct shared_ptr<CutSame::MaterialSpeed> { struct MaterialSpeed *x0; struct __shared_weak_count *x1; })a0 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1;
+ (id)genCanvasKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (id)genMaskKeyframeJsonString:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0 videoCropSize:(struct CGSize { double x0; double x1; })a1 onSegment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a2;
+ (id)jsonStringFromDictionary:(id)a0;

@end
