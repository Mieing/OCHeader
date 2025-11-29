@class NSString, NSMutableDictionary;

@interface ClassMethodDispatchCenter : MMRootService <MMServiceProtocol> {
    NSMutableDictionary *m_dictClsMethodObservers;
    NSMutableDictionary *m_dictClsMethodKeyObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addObserver:(Class)a0 toDict:(id)a1 methods:(struct objc_method_description { SEL x0; char *x1; } *)a2 methodCnt:(unsigned int)a3;
- (void)registerClsMethodObserver:(Class)a0 onProtocol:(id)a1;
- (void)registerClsMethodKeyObserver:(Class)a0 onProtocol:(id)a1 withKey:(id)a2;
- (void)unregisterClsMethodObserver:(Class)a0 onProtocol:(id)a1;
- (void)unregisterClsMethodKeyObserver:(Class)a0 onProtocol:(id)a1 withKey:(id)a2;
- (id)getClsMethodObservers:(id)a0 selector:(SEL)a1;
- (Class)getClsMethodKeyObserver:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;

@end
