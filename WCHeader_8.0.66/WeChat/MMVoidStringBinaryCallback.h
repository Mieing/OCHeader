@interface MMVoidStringBinaryCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidStringBinaryCallback>> { struct shared_ptr<kinda::VoidStringBinaryCallback> { struct VoidStringBinaryCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(id)a0 value2:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
