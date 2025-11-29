@interface MMKEditTextOnFocusChangeCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KEditTextOnFocusChangeCallback>> { struct shared_ptr<kinda::KEditTextOnFocusChangeCallback> { struct KEditTextOnFocusChangeCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onFocusChange:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
