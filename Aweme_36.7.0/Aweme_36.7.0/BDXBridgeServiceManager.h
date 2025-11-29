@class NSMutableDictionary, NSRecursiveLock;

@interface BDXBridgeServiceManager : NSObject

@property (class, readonly, nonatomic) BDXBridgeServiceManager *sharedManager;

@property (retain, nonatomic) NSMutableDictionary *serviceClasses;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSRecursiveLock *serviceLock;

- (void)bindProtocl:(id)a0 toClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;

@end
