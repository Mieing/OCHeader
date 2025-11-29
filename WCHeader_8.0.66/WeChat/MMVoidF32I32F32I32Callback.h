@interface MMVoidF32I32F32I32Callback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidF32I32F32I32Callback>> { struct shared_ptr<kinda::VoidF32I32F32I32Callback> { struct VoidF32I32F32I32Callback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(float)a0 value2:(int)a1 value3:(float)a2 value4:(int)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
