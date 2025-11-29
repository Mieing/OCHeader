@class NLESegmentAutoFillFrame_OC;

@interface NLEAutoFillFrame_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEAutoFillFrame> { struct NLEAutoFillFrame *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentAutoFillFrame_OC *segmentAutoFillFrame;
@property (nonatomic) BOOL isTemplate;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEAutoFillFrame> { struct NLEAutoFillFrame *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
