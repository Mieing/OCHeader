@class NSRecursiveLock, NSMutableArray, Protocol;

@interface WAJSContextPluginDelegateCenter : NSObject {
    Protocol *m_protocolKey;
    NSRecursiveLock *m_delegateLock;
    NSMutableArray *m_delegates;
    BOOL m_needCleanUp;
}

- (id)initWithKey:(id)a0;
- (BOOL)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)__delegate:(SEL)a0 block:(id /* block */)a1;
- (void)releaseDelegates;
- (void)__cleanUp;
- (void)cleanUp;
- (void).cxx_destruct;

@end
