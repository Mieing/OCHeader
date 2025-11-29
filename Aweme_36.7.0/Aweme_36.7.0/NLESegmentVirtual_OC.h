@class NSString, NLEResourceNode_OC;

@interface NLESegmentVirtual_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentVirtual> { struct NLESegmentVirtual *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *virtualType;
@property (retain, nonatomic) NLEResourceNode_OC *virtualResource;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentVirtual> { struct NLESegmentVirtual *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
