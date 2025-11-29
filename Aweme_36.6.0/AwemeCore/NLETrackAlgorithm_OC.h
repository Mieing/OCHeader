@interface NLETrackAlgorithm_OC : NLETrack_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETrackAlgorithm> { struct NLETrackAlgorithm *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) double videoRatio;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETrackAlgorithm> { struct NLETrackAlgorithm *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<cut::model::NLETrackAlgorithm> { struct NLETrackAlgorithm *x0; struct __shared_weak_count *x1; })cppTrackAlgorithm;
- (id)init;

@end
