@interface MMKRegionEditViewOnRegionSelectedCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback>> { struct shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback> { struct KRegionEditViewOnRegionSelectedCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onRegionSelected;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
