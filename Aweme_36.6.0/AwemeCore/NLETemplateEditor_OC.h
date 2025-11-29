@class NLETemplateModel_OC;

@interface NLETemplateEditor_OC : NLEEditor_OC

@property (retain, nonatomic) NLETemplateModel_OC *model;
@property (nonatomic) struct shared_ptr<cut::model::NLETemplateEditor> { struct NLETemplateEditor *__ptr_; struct __shared_weak_count *__cntrl_; } cppEditor;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETemplateEditor> { struct NLETemplateEditor *x0; struct __shared_weak_count *x1; })a0;
- (id)generateNLEInstanceFromCPPModel:(struct shared_ptr<cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
