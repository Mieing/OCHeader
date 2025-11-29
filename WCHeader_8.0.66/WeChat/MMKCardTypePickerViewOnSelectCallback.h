@interface MMKCardTypePickerViewOnSelectCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KCardTypePickerViewOnSelectCallback>> { struct shared_ptr<kinda::KCardTypePickerViewOnSelectCallback> { struct KCardTypePickerViewOnSelectCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onSelect:(int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
