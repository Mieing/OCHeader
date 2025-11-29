@interface NLESegmentAudioLoudnessBalanceFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAudioLoudnessBalanceFilter> { struct NLESegmentAudioLoudnessBalanceFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) double avgLoudness;
@property (nonatomic) double peakLoudness;
@property (nonatomic) double targetLoudness;

@end
