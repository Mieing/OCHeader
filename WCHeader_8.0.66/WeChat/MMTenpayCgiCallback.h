@interface MMTenpayCgiCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::TenpayCgiCallback>> { struct shared_ptr<kinda::TenpayCgiCallback> { struct TenpayCgiCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onError:(int)a0 errmsg:(id)a1;
- (void)onSuccess:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
