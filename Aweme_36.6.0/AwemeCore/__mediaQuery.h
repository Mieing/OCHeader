@class RelaxEngine;

@interface __mediaQuery : MediaQuery {
    RelaxEngine *_runtime;
    struct unique_ptr<relax::runtime::MediaQuery, std::default_delete<relax::runtime::MediaQuery>> { struct MediaQuery *__ptr_; } _impl;
    struct weak_ptr<relax::ElementManager> { struct ElementManager *__ptr_; struct __shared_weak_count *__cntrl_; } _weakElementManager;
}

+ (id)getCurrent;
+ (id)fetchCurrentState:(id)a0;
+ (void)addListener:(id /* block */)a0 returnType:(id)a1;
+ (id)fetchCurrentState;
+ (void)removeListener:(id /* block */)a0;
+ (void)removeAllListeners;
+ (void)addListener:(id /* block */)a0;

- (id)fetchCurrentState:(id)a0;
- (void)addListener:(id /* block */)a0 returnType:(id)a1;
- (id)fetchCurrentState;
- (id)init:(id)a0;
- (void)removeListener:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeAllListeners;
- (void)addListener:(id /* block */)a0;
- (id).cxx_construct;
- (void)detach;
- (void)dealloc;

@end
