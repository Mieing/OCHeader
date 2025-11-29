@interface OMJMaasSessionHolder : NSObject

@property (nonatomic) struct SharedPtr<XMJDefaultSessionWrapper> { struct XMJDefaultSessionWrapper *_ptr; } backingSession;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithBackingSession:(struct SharedPtr<XMJDefaultSessionWrapper> { struct XMJDefaultSessionWrapper *x0; })a0 type:(unsigned long long)a1;
- (void)startupWithCompletionHandler:(id /* block */)a0;
- (void)teardownWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
