@interface MMExtensionCenter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock;
    void *m_dictExtension;
    id m_context;
}

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)getExtension:(id)a0;
- (void)registerExtension:(id)a0 withTarget:(id)a1;
- (void)unRegisterExtension:(id)a0 withTarget:(id)a1;
- (void)registerExtension:(id)a0 withKey:(id)a1 withTarget:(id)a2;
- (void)unRegisterExtension:(id)a0 withKey:(id)a1 withTarget:(id)a2;
- (void)unRegisterAllKeyExtension:(id)a0 withTarget:(id)a1;
- (void)callExtension:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
- (void)callKeyExtension:(id)a0 key:(id)a1 selector:(SEL)a2 block:(id /* block */)a3;
- (void)callExtensionContinuously:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
- (void)callKeyExtensionContinuously:(id)a0 key:(id)a1 selector:(SEL)a2 block:(id /* block */)a3;
- (void)callExtensionOnMainThread:(id)a0 selector:(SEL)a1 sync:(BOOL)a2 block:(id /* block */)a3;
- (void)callKeyExtensionOnMainThread:(id)a0 key:(id)a1 selector:(SEL)a2 sync:(BOOL)a3 block:(id /* block */)a4;
- (void)callExtensionOnMainThreadContinuously:(id)a0 selector:(SEL)a1 sync:(BOOL)a2 block:(id /* block */)a3;
- (void)callKeyExtensionOnMainThreadContinuously:(id)a0 key:(id)a1 selector:(SEL)a2 sync:(BOOL)a3 block:(id /* block */)a4;
- (void)checkExistExtension;

@end
