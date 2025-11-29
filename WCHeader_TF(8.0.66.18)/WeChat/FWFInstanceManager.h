@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface FWFInstanceManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain) NSMapTable *identifiers;
@property (retain) NSMapTable *weakInstances;
@property (retain) NSMapTable *strongInstances;
@property long long nextIdentifier;
@property (readonly) id /* block */ deallocCallback;

- (id)init;
- (id)initWithDeallocCallback:(id /* block */)a0;
- (void)addDartCreatedInstance:(id)a0 withIdentifier:(long long)a1;
- (long long)addHostCreatedInstance:(id)a0;
- (id)removeInstanceWithIdentifier:(long long)a0;
- (id)instanceForIdentifier:(long long)a0;
- (void)addInstance:(id)a0 withIdentifier:(long long)a1;
- (long long)identifierWithStrongReferenceForInstance:(id)a0;
- (BOOL)containsInstance:(id)a0;
- (unsigned long long)strongInstanceCount;
- (unsigned long long)weakInstanceCount;
- (void).cxx_destruct;

@end
