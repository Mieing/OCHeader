@interface MMVoidBoolI32Callback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidBoolI32Callback>> { struct shared_ptr<kinda::VoidBoolI32Callback> { struct VoidBoolI32Callback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(BOOL)a0 value2:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
