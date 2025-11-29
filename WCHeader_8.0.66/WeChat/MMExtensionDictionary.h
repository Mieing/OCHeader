@interface MMExtensionDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock;
    void *m_dict;
    void *m_observerToKeys;
    BOOL m_needCleanUp;
    BOOL m_needDeepClean;
}

- (id)initWithKeyExtension:(BOOL)a0;
- (void)dealloc;
- (BOOL)registerExtension:(id)a0 forKey:(unsigned long long)a1;
- (BOOL)unregisterExtension:(id)a0 forKey:(unsigned long long)a1;
- (BOOL)unregisterAllKeyExtension:(id)a0;
- (void *)getKeyExtensionList:(unsigned long long)a0;
- (void)testNeedsCleanUp;
- (void)cleanUp;
- (id)existExtensionObject;

@end
