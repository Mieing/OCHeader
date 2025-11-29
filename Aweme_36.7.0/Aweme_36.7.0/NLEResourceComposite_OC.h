@class NLENode_OC;

@interface NLEResourceComposite_OC : NLEResourceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEResourceComposite> { struct NLEResourceComposite *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLENode_OC *compositeNode;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceComposite> { struct NLEResourceComposite *x0; struct __shared_weak_count *x1; })a0;
- (id)imageTemplateModel;
- (void).cxx_destruct;
- (id)init;

@end
