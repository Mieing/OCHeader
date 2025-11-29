@class NSMapTable, NSMutableDictionary;

@interface PuzzleBeanFactory : NSObject {
    NSMapTable *_objectRegistry;
    NSMapTable *_classRegistry;
    NSMutableDictionary *_cachedDict;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

- (Class)getClassWithProtocol:(id)a0;
- (id)serviceKeyWithProtocol:(id)a0;
- (id)prototypeObjectWithProtocol:(id)a0 context:(id)a1;
- (BOOL)bindClass:(Class)a0 forProtocol:(id)a1;
- (BOOL)bindObject:(id)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
