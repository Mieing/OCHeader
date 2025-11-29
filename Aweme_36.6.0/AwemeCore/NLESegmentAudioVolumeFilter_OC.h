@interface NLESegmentAudioVolumeFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAudioVolumeFilter> { struct NLESegmentAudioVolumeFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) double volume;
@property (nonatomic) double dbRange;
@property (nonatomic) double balancedGain;

@end
