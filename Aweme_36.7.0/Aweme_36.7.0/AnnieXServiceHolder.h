@class NSRecursiveLock, NSMutableSet, BDXThreadSafeDictionary;

@interface AnnieXServiceHolder : NSObject

@property (retain) BDXThreadSafeDictionary *protocolToClassMap;
@property (retain) BDXThreadSafeDictionary *protocolToObjectMap;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableSet *protocolClassCalledSet;

- (Class)getClassWithProtocol:(id)a0 bizID:(id)a1;
- (Class)getClassWithProtocol:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (id)getObjectWithProtocol:(id)a0 bizID:(id)a1;
- (BOOL)checkClass:(Class)a0 protocol:(id)a1;
- (void)__triggerSetupIfNeededWithProtocolName:(id)a0 protocol:(id)a1 bizId:(id)a2;
- (id)getObjectWithClass:(Class)a0;
- (id)getObjectWithoutDefautWithProtocol:(id)a0 bizID:(id)a1;
- (Class)getOnlyBizClasstWithProtocol:(id)a0 bizID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
