@interface OMJServiceManager : NSObject

@property (nonatomic) struct SharedPtr<XMJServiceManager> { struct XMJServiceManager *_ptr; } backingServiceManager;

- (id)initWithBackingServiceManager:(const void *)a0;
- (void)dealloc;
- (void)requestAllCamFunTemplateInfosWithCompletionHandler:(id /* block */)a0;
- (void)requestTemplateDescWithTemplateID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
