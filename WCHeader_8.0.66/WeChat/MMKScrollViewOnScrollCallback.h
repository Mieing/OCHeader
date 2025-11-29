@interface MMKScrollViewOnScrollCallback : NSObject {
    struct Handle<std::shared_ptr<kinda::KScrollViewOnScrollCallback>> { struct shared_ptr<kinda::KScrollViewOnScrollCallback> { struct KScrollViewOnScrollCallback *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onScroll:(float)a0 y:(float)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
