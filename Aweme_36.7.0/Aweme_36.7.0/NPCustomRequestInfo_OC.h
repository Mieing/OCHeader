@interface NPCustomRequestInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPCustomRequestInfo> { struct NPCustomRequestInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getTemplateID;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPCustomRequestInfo> { struct NPCustomRequestInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)getWorkspace;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getRequestID;

@end
