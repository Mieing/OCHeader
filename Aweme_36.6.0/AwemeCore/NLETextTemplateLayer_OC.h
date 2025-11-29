@interface NLETextTemplateLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppTempateLayer;

- (id)getText:(long long)a0;
- (void)setText:(long long)a0 text:(id)a1;
- (int)getTextCount;
- (id)getTextParam:(long long)a0;
- (id)initWithId:(id)a0 resources:(id)a1 dependResources:(id)a2;
- (id)initWithCPPTextTemplateLayer:(struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
