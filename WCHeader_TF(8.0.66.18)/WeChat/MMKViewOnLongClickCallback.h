@interface MMKViewOnLongClickCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KViewOnLongClickCallback>> { struct shared_ptr<kinda::KViewOnLongClickCallback> { struct KViewOnLongClickCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onLongClick:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
