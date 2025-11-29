@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface HybridServiceManager : NSObject <HybridResourceModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableDictionary *protocolToClassMap;

+ (Class)getClassWithProtocol:(id)a0;
+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (id)getInstanceWithProtocol:(id)a0;
+ (void)_autoCollectHybridService;
+ (id)sharedInstance;

- (Class)getClassWithProtocol:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (id)provideHybridResourceService;
- (void).cxx_destruct;
- (id)init;

@end
