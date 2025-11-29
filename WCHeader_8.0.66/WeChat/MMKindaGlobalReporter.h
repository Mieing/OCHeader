@interface MMKindaGlobalReporter : NSObject {
    struct Handle<std::shared_ptr<kinda::KindaGlobalReporter>> { struct shared_ptr<kinda::KindaGlobalReporter> { struct KindaGlobalReporter *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)createReporter;

- (id)initWithCpp:(const void *)a0;
- (void)log:(id)a0;
- (id)getCppSessionId;
- (void)listenSessionId:(id)a0;
- (void)unlistenSessionId:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
