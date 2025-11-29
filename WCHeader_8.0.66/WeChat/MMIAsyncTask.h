@interface MMIAsyncTask : NSObject {
    struct Handle<std::shared_ptr<kinda::IAsyncTask>> { struct shared_ptr<kinda::IAsyncTask> { struct IAsyncTask *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)execute;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
