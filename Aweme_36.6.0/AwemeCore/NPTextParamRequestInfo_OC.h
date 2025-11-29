@interface NPTextParamRequestInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPTextParamRequestInfo> { struct NPTextParamRequestInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getRequsetID;
- (id)getTemplateID;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPTextParamRequestInfo> { struct NPTextParamRequestInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)getError;
- (id).cxx_construct;

@end
