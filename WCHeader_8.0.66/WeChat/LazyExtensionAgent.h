@class NSString, NSMutableDictionary;

@interface LazyExtensionAgent : MMRootService <MMServiceProtocol> {
    NSMutableDictionary *m_dicExtensions;
    NSMutableDictionary *m_dicKeyExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)returnAsRawService;
- (void)addListener:(Class)a0 toDic:(id)a1 forMethods:(struct objc_method_description { SEL x0; char *x1; } *)a2 methodCount:(unsigned int)a3;
- (void)registerLazyListener:(Class)a0 onExtension:(id)a1;
- (void)precreateService:(Class)a0 inContext:(id)a1;
- (void)ensureLazyListenerInitedForExtension:(id)a0 withSelector:(SEL)a1 inContext:(id)a2;
- (void)registerLazyListener:(Class)a0 onExtension:(id)a1 forKey:(id)a2;
- (void)ensureLazyListenerInitedForExtension:(id)a0 withSelector:(SEL)a1 forKey:(id)a2 inContext:(id)a3;
- (void).cxx_destruct;

@end
