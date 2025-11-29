@interface MMKCountryCallingCodeViewOnSelectCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KCountryCallingCodeViewOnSelectCallback>> { struct shared_ptr<kinda::KCountryCallingCodeViewOnSelectCallback> { struct KCountryCallingCodeViewOnSelectCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onSelect:(id)a0 nationality:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
