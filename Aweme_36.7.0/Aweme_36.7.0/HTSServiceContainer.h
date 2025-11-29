@class NSMutableDictionary, NSRecursiveLock;

@interface HTSServiceContainer : NSObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_hashProtocolScope;
    NSMutableDictionary *_hashProtocolInstance;
    NSMutableDictionary *_hashProtocolService;
    HTSServiceContainer *_parentContainer;
}

- (void)bindBlock:(id /* block */)a0 toProtocol:(id)a1 withScope:(int)a2;
- (id)initWithParentContainer:(id)a0;
- (id)getProtocolService:(id)a0;
- (id)__getMultipleInstanceProtocolName:(id)a0;
- (id)__firstFoundCacheWithProtocolName:(id)a0;
- (id)__getProtocolServiceWithProtocolName:(id)a0;
- (int)__getScopeTypeWithProtocolName:(id)a0;
- (id)__secondGetAndcheckCacheWithProtocolName:(id)a0;
- (id)__getShareInstanceProtocolName:(id)a0;
- (id)__getWeakShareInstanceProtocolName:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1 withScope:(int)a2;
- (void).cxx_destruct;
- (id)init;

@end
