@class NSString;

@interface NLEStringFloatPair_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEStringFloatPair> { struct NLEStringFloatPair *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *first;
@property (nonatomic) double second;

+ (id)NLEUIAnnotationExtraKeyDefaultValue;
+ (id)NLEUIAnnotationExtraKeyMinValue;
+ (id)NLEUIAnnotationExtraKeyMaxValue;

@end
