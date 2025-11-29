@class NSArray;

@interface NLESegmentAdjustEnhancementFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAdjustEnhancementFilter> { struct NLESegmentAdjustEnhancementFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSArray *adjustmentTypes;
@property (copy, nonatomic) NSArray *adjustmentResourceIntensities;
@property (copy, nonatomic) NSArray *adjustmentResourcePaths;

@end
