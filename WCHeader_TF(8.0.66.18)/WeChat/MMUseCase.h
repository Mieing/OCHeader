@interface MMUseCase : NSObject {
    struct Handle<std::shared_ptr<kinda::UseCase>> { struct shared_ptr<kinda::UseCase> { struct UseCase *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)notify:(id)a0;
- (void)preStepDidDestory;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
