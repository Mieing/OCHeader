@interface MMVoidBinaryI32Callback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidBinaryI32Callback>> { struct shared_ptr<kinda::VoidBinaryI32Callback> { struct VoidBinaryI32Callback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(id)a0 value2:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
