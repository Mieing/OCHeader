@interface NLEKeyFrameUtil : NSObject

+ (id)genKeyframeGraphIfNeeded:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (struct shared_ptr<cut::model::NLEMatrix> { struct NLEMatrix *x0; struct __shared_weak_count *x1; })getMatrix:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
+ (id)genVolumeKeyframeParamsString:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)genFilterKeyframeJsonString:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 forResourcePath:(id)a1 filterName:(id)a2 resourceFinder:(id)a3;
+ (id)genAudioPitchKeyframeJsonStringWithFilter:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)genChromaKeyframeJsonString:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)genMaskKeyframeJsonString:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 cropSize:(struct CGSize { double x0; double x1; })a1 newMaskSize:(struct CGSize { double x0; double x1; })a2;
+ (struct shared_ptr<cut::model::NLESegmentMask> { struct NLESegmentMask *x0; struct __shared_weak_count *x1; })genMaskForSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 withKeyframeParams:(id)a1;
+ (id)genCanvasKeyframeJsonString:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 forTrack:(struct shared_ptr<cut::model::NLETrack> { struct NLETrack *x0; struct __shared_weak_count *x1; })a1 inSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a2 withContext:(id)a3;
+ (long long)transformKeyframeToTargetTime:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 onSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a1;
+ (unsigned long long)transformSourceTimeToTargetTime:(long long)a0 onSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a1;
+ (id)genCurveTransformerForSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)genTextKeyframeJsonStringForSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 atKeyFrame:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a1 forTrack:(struct shared_ptr<cut::model::NLETrack> { struct NLETrack *x0; struct __shared_weak_count *x1; })a2 withContext:(id)a3;
+ (id)genStickerKeyframeJsonStringSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 atKeyFrame:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a1 forTrack:(struct shared_ptr<cut::model::NLETrack> { struct NLETrack *x0; struct __shared_weak_count *x1; })a2 withContext:(id)a3;

@end
