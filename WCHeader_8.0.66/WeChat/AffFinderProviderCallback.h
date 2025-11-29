@interface AffFinderProviderCallback : NSObject {
    struct weak_ptr<zidl::ZServerInvoker> { struct ZServerInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } server_invoker_;
}

- (id)initWithCpp:(const void *)a0;
- (void)onfinderRedDotHasAddActionComplete:(unsigned long long)a0;
- (void)onfinderRedDotHasDisposeActionComplete:(unsigned long long)a0;
- (void)onfinderRedDotDataChangedActionComplete:(unsigned long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
