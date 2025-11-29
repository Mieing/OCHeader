@class RelaxEngine;

@interface __globalEventEmitter : GlobalEventEmitter {
    RelaxEngine *_runtime;
    struct unique_ptr<relax::runtime::GlobalEventEmitter, std::default_delete<relax::runtime::GlobalEventEmitter>> { struct GlobalEventEmitter *__ptr_; } _impl;
    struct weak_ptr<relax::ElementManager> { struct ElementManager *__ptr_; struct __shared_weak_count *__cntrl_; } _weakElementManager;
}

+ (id)getCurrent;
+ (void)addListener:(id)a0 listener:(id /* block */)a1 returnType:(id)a2;
+ (void)addListener:(id)a0 listener:(id /* block */)a1;
+ (void)removeListener:(id)a0 listener:(id /* block */)a1;
+ (void)removeAllListeners:(id)a0;
+ (void)trigger:(id)a0 params:(id)a1;

- (void)addListener:(id)a0 listener:(id /* block */)a1 returnType:(id)a2;
- (void)addListener:(id)a0 listener:(id /* block */)a1;
- (void)removeListener:(id)a0 listener:(id /* block */)a1;
- (void)removeAllListeners:(id)a0;
- (void)trigger:(id)a0 params:(id)a1;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)detach;
- (void)dealloc;

@end
