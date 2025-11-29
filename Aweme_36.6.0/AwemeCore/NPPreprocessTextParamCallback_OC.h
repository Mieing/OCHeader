@interface NPPreprocessTextParamCallback_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::INPPreprocessTextParamCallback> { struct INPPreprocessTextParamCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (void)onFailure:(id)a0 templateID:(id)a1 error:(id)a2;
- (void)onSuccess:(id)a0 templateID:(id)a1 textParamResources:(id)a2;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::INPPreprocessTextParamCallback> { struct INPPreprocessTextParamCallback *x0; struct __shared_weak_count *x1; })a0;
- (void)onProgress:(id)a0 templateID:(id)a1 progress:(double)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
