@interface MMKPwdInputViewOnPasswordChangeCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback>> { struct shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback> { struct KPwdInputViewOnPasswordChangeCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onPasswordChange:(int)a0 payPassword:(id)a1 passwordHashData:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
