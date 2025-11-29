@class NSString;

@interface TemplateConfig_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::TemplateConfig> { struct TemplateConfig *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *canvasRatio;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::TemplateConfig> { struct TemplateConfig *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
