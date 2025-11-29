@class NSMutableDictionary, NSRecursiveLock;

@interface SearchDynamicServiceManager : NSObject

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSRecursiveLock *recLock;

+ (id)sharedManager;

- (Class)getClassWithProtocol:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (BOOL)checkClass:(Class)a0 protocol:(id)a1;
- (Class)getClassWithProtocol:(id)a0 searchServiceID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
