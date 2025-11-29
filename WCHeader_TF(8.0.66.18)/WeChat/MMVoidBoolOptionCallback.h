@interface MMVoidBoolOptionCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidBoolOptionCallback>> { struct shared_ptr<kinda::VoidBoolOptionCallback> { struct VoidBoolOptionCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(BOOL)a0 value2:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
