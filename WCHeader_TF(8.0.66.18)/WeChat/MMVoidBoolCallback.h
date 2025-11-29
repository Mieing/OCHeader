@interface MMVoidBoolCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidBoolCallback>> { struct shared_ptr<kinda::VoidBoolCallback> { struct VoidBoolCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
