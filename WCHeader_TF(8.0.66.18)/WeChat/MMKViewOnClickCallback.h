@interface MMKViewOnClickCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KViewOnClickCallback>> { struct shared_ptr<kinda::KViewOnClickCallback> { struct KViewOnClickCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onClick:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
