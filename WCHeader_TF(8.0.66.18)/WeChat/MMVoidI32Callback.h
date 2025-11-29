@interface MMVoidI32Callback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidI32Callback>> { struct shared_ptr<kinda::VoidI32Callback> { struct VoidI32Callback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
