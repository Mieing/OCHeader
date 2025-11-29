@interface MMKPwdInputViewOnEndEnterPasswordCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback>> { struct shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback> { struct KPwdInputViewOnEndEnterPasswordCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onEndEnterPassword:(id)a0 passwordHashData:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
