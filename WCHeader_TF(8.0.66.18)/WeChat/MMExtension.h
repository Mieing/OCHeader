@class MMExtensionDictionary, Protocol;

@interface MMExtension : NSObject {
    unsigned int m_methodCount;
    struct objc_method_description { SEL x0; char *x1; } *m_methods;
    MMExtensionDictionary *m_dictObserver;
    MMExtensionDictionary *m_dictKeyObserver;
    Protocol *m_extKey;
}

- (id)initWithExtension:(id)a0;
- (void)dealloc;
- (BOOL)registerExtension:(id)a0;
- (BOOL)registerExtension:(id)a0 forKey:(id)a1;
- (void)unregisterExtension:(id)a0;
- (void)unregisterExtension:(id)a0 forKey:(id)a1;
- (void)unregisterAllKeyExtension:(id)a0;
- (void *)getExtensionListForSelector:(SEL)a0;
- (void *)getKeyExtensionList:(id)a0;
- (id)description;
- (id)existExtensionObject;

@end
