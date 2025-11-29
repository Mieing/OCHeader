@interface MMVoidCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidCallback>> { struct shared_ptr<kinda::VoidCallback> { struct VoidCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
