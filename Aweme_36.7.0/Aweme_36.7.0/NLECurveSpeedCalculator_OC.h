@interface NLECurveSpeedCalculator_OC : NSObject {
    struct shared_ptr<nle::utils::NLECurveSpeedCalculator> { struct NLECurveSpeedCalculator *__ptr_; struct __shared_weak_count *__cntrl_; } _calculator;
}

+ (struct vector<std::shared_ptr<cut::model::NLEPoint>, std::allocator<std::shared_ptr<cut::model::NLEPoint>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<cut::model::NLEPoint> *, std::allocator<std::shared_ptr<cut::model::NLEPoint>>> { void *x0; } x2; })nlePointsFromCGPoints:(id)a0;
+ (id)pointsFromNLEPoints:(struct vector<std::shared_ptr<cut::model::NLEPoint>, std::allocator<std::shared_ptr<cut::model::NLEPoint>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<cut::model::NLEPoint> *, std::allocator<std::shared_ptr<cut::model::NLEPoint>>> { void *x0; } x2; })a0;
+ (id)segmentPToSequenceP:(id)a0;
+ (struct shared_ptr<cut::model::NLEPoint> { struct NLEPoint *x0; struct __shared_weak_count *x1; })nlePointFromCGPoint:(id)a0;
+ (id)pointFromNLEPoint:(struct shared_ptr<cut::model::NLEPoint> { struct NLEPoint *x0; struct __shared_weak_count *x1; })a0;
+ (id)generateThirdBezierPathPoints:(id)a0;
+ (id)generateBezierPathLookupTable:(id)a0;
+ (id)recursiveCalculateCubePoint:(id)a0 progress:(float)a1;
+ (struct CGPoint { double x0; double x1; })getBezierPointsWithLeft:(struct CGPoint { double x0; double x1; })a0 right:(struct CGPoint { double x0; double x1; })a1 duration:(long long)a2 offet:(long long)a3;
+ (struct CGPoint { double x0; double x1; })calculateCubePointWithT:(float)a0 start:(struct CGPoint { double x0; double x1; })a1 control1:(struct CGPoint { double x0; double x1; })a2 control2:(struct CGPoint { double x0; double x1; })a3 end:(struct CGPoint { double x0; double x1; })a4;

- (id)initWithSeqPoints:(id)a0;
- (id)initWithSegPoints:(id)a0;
- (double)getAveCurveSpeedRatio;
- (double)getSpeedRatioBySeqDelta:(long long)a0 seqDurationUs:(long long)a1;
- (long long)sequenceDelToSegmentDel:(long long)a0 seqDurationUs:(long long)a1;
- (long long)segmentDelToSequenceDel:(long long)a0 seqDurationUs:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
