@interface MMKEditTextOnTextChangedCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KEditTextOnTextChangedCallback>> { struct shared_ptr<kinda::KEditTextOnTextChangedCallback> { struct KEditTextOnTextChangedCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onTextChanged:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
