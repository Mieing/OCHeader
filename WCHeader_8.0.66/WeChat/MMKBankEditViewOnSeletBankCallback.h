@interface MMKBankEditViewOnSeletBankCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KBankEditViewOnSeletBankCallback>> { struct shared_ptr<kinda::KBankEditViewOnSeletBankCallback> { struct KBankEditViewOnSeletBankCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onSeletBank:(id)a0 bankType:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
