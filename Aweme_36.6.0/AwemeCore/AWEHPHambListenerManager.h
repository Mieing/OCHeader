@class NSLock, AWEHPHambListenerNode;

@interface AWEHPHambListenerManager : NSObject

@property (copy, nonatomic) id /* block */ getConfigBlock;
@property (retain, nonatomic) AWEHPHambListenerNode *rootNode;
@property (retain, nonatomic) NSLock *lock;

- (BOOL)p_tryUpdateConfigAndCallListenersWithNode:(id)a0;
- (id)p_getConfigWithCmd:(id)a0;
- (void)p_tryUpdateConfigWithNode:(id)a0;
- (void)tryUpdateConfigWithNames:(id)a0;
- (void)tryUpdateAllConfig;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
