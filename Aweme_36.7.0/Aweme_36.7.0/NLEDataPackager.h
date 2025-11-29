@interface NLEDataPackager : NSObject

+ (id)verticesForCrop:(struct shared_ptr<cut::model::NLEStyCrop> { struct NLEStyCrop *x0; struct __shared_weak_count *x1; })a0;
+ (id)verticesForClip:(struct shared_ptr<cut::model::NLEStyClip> { struct NLEStyClip *x0; struct __shared_weak_count *x1; })a0;
+ (struct CGPoint { double x0; double x1; })convertPointToVEVertice:(struct CGPoint { double x0; double x1; })a0;
+ (id)composerNodesForComposerFilter:(struct shared_ptr<cut::model::NLESegmentComposerFilter> { struct NLESegmentComposerFilter *x0; struct __shared_weak_count *x1; })a0 resourceFinder:(id)a1 withIntensity:(BOOL)a2;

@end
