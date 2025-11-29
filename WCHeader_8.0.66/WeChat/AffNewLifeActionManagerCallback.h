@interface AffNewLifeActionManagerCallback : NSObject {
    struct weak_ptr<zidl::ZServerInvoker> { struct ZServerInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } server_invoker_;
}

- (id)initWithCpp:(const void *)a0;
- (void)onDoActionComplete:(int)a0 resp:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
