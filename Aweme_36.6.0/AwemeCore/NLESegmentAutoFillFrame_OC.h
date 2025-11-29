@class NLEResourceNode_OC;

@interface NLESegmentAutoFillFrame_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAutoFillFrame> { struct NLESegmentAutoFillFrame *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKAutoFillFrame;
@property (nonatomic) unsigned long long autoFillAlgType;
@property (nonatomic) double algScale;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentAutoFillFrame> { struct NLESegmentAutoFillFrame *x0; struct __shared_weak_count *x1; })a0;
- (id)getResource;
- (void).cxx_destruct;
- (id)init;

@end
