@class NLEResourceNode_OC, NLEResourceAV_OC;

@interface NLERenderProxySegment_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERenderProxySegment> { struct NLERenderProxySegment *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceAV_OC *avFile;
@property (retain, nonatomic) NLEResourceNode_OC *renderConfigRes;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERenderProxySegment> { struct NLERenderProxySegment *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (id)init;

@end
