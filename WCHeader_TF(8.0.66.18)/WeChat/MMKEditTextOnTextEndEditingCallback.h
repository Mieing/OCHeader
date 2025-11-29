@interface MMKEditTextOnTextEndEditingCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KEditTextOnTextEndEditingCallback>> { struct shared_ptr<kinda::KEditTextOnTextEndEditingCallback> { struct KEditTextOnTextEndEditingCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onTextEndEditing:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
