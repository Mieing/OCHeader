@interface MMKEditTextOnEditorActionCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KEditTextOnEditorActionCallback>> { struct shared_ptr<kinda::KEditTextOnEditorActionCallback> { struct KEditTextOnEditorActionCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onEditorAction:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
