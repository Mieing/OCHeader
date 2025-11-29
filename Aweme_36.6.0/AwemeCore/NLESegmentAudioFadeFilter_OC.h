@interface NLESegmentAudioFadeFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAudioFadeFilter> { struct NLESegmentAudioFadeFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeInLength;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fadeOutLength;

@end
