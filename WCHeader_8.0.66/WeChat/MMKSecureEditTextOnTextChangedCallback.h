@interface MMKSecureEditTextOnTextChangedCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KSecureEditTextOnTextChangedCallback>> { struct shared_ptr<kinda::KSecureEditTextOnTextChangedCallback> { struct KSecureEditTextOnTextChangedCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onTextChanged:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
