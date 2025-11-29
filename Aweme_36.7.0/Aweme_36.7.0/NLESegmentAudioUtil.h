@interface NLESegmentAudioUtil : NSObject

+ (float)VEMaxVolume;
+ (id)getClipRangeFromSlot:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0 forNLEModel:(struct shared_ptr<cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })a1;
+ (float)actualVolumeFromSegment:(struct shared_ptr<cut::model::NLESegmentAudio> { struct NLESegmentAudio *x0; struct __shared_weak_count *x1; })a0;
+ (float)VEDefaultVolume;
+ (float)MaxVolume;
+ (float)DefaultVolume;

@end
