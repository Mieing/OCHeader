@interface NPAIGCRequestInfo_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPAIGCRequestInfo> { struct NPAIGCRequestInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;

- (id)getRequsetID;
- (id)getTemplateID;
- (unsigned long long)getPreAIType;
- (id)initWithCppValue:(struct shared_ptr<nle::preset::NPAIGCRequestInfo> { struct NPAIGCRequestInfo *x0; struct __shared_weak_count *x1; })a0;
- (long long)getGroupSize;
- (void).cxx_destruct;
- (id)getError;
- (id).cxx_construct;

@end
