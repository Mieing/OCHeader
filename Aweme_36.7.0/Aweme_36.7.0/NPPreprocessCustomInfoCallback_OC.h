@interface NPPreprocessCustomInfoCallback_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::INPPreprocessCustomInfoCallback> { struct INPPreprocessCustomInfoCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (void)onProgress:(id)a0 progress:(double)a1;
- (void)onSuccess:(id)a0 customResources:(id)a1;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::INPPreprocessCustomInfoCallback> { struct INPPreprocessCustomInfoCallback *x0; struct __shared_weak_count *x1; })a0;
- (void)onFailure:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
