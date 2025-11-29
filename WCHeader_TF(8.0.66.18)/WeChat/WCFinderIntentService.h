@class NSString, MMLRUCache, NSRecursiveLock;

@interface WCFinderIntentService : MMUserService <MMServiceProtocol> {
    NSRecursiveLock *m_lock;
    MMLRUCache *intentCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hashIntent:(id)a0;

- (void)onServiceInit;
- (void)dealloc;
- (void)clearLinkedList;
- (void)clearIntentItem:(id)a0;
- (void)removeCache:(id)a0;
- (void)putKey:(id)a0 andVal:(id)a1;
- (id)getValByKey:(id)a0;
- (void)removeKey:(id)a0;
- (void)putKey:(id)a0 andVal:(id)a1 atObjHash:(id)a2;
- (id)getValByKey:(id)a0 atObjHash:(id)a1;
- (id)traceValByKey:(id)a0 atObjHash:(id)a1;
- (BOOL)bindIntent:(id)a0 andPreIntent:(id)a1;
- (BOOL)clear:(id)a0;
- (void).cxx_destruct;

@end
