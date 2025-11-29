@interface MMVoidF32F32BoolCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidF32F32BoolCallback>> { struct shared_ptr<kinda::VoidF32F32BoolCallback> { struct VoidF32F32BoolCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(float)a0 value2:(float)a1 value3:(BOOL)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
