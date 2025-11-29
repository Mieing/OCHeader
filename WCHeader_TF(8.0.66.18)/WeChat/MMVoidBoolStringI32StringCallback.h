@interface MMVoidBoolStringI32StringCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::VoidBoolStringI32StringCallback>> { struct shared_ptr<kinda::VoidBoolStringI32StringCallback> { struct VoidBoolStringI32StringCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)call:(BOOL)a0 value2:(id)a1 value3:(int)a2 value4:(id)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
