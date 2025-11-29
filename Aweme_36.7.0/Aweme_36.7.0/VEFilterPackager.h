@interface VEFilterPackager : NSObject

+ (id)colorCurveFilterParamsFromSegment:(struct shared_ptr<cut::model::NLESegmentColorCurvesFilter> { struct NLESegmentColorCurvesFilter *x0; struct __shared_weak_count *x1; })a0;
+ (id)primaryColorWheelsFilterParamsFromSegment:(struct shared_ptr<cut::model::NLESegmentPrimaryColorWheelsFilter> { struct NLESegmentPrimaryColorWheelsFilter *x0; struct __shared_weak_count *x1; })a0;
+ (id)logColorWheelsFilterParamsFromSegment:(struct shared_ptr<cut::model::NLESegmentLogColorWheelsFilter> { struct NLESegmentLogColorWheelsFilter *x0; struct __shared_weak_count *x1; })a0;

@end
