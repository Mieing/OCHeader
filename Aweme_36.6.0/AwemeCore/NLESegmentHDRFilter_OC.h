@interface NLESegmentHDRFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentHDRFilter> { struct NLESegmentHDRFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long frameType;
@property (nonatomic) BOOL denoise;
@property (nonatomic) long long asfMode;
@property (nonatomic) long long hdrMode;

@end
