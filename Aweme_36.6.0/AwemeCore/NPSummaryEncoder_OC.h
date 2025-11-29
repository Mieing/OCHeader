@interface NPSummaryEncoder_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPSummaryEncoder> { struct NPSummaryEncoder *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPSummaryEncoder> { struct NPSummaryEncoder *x0; struct __shared_weak_count *x1; })a0;
- (id)encodeFromPreset:(id)a0;
- (id)encodeFromTemplateModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
