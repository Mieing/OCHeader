@class NSMutableDictionary, NSRecursiveLock;

@interface BDLSDKManager : NSObject

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToObjectMap;
@property (retain) NSMutableDictionary *systemInfo;
@property (retain) NSRecursiveLock *recLock;

+ (void)initLogObserver;
+ (void)bdl_bindServiceClass:(Class)a0 toProtocol:(id)a1;
+ (void)registCustomUIComponent;
+ (id)bdl_serviceWithProtocol:(id)a0 selector:(SEL)a1;
+ (id)bdl_serviceWithProtocol:(id)a0;
+ (void)registerCustomSystemInfo;
+ (id)lynxVersionString;
+ (id)getSystemInfoByKey:(id)a0;
+ (id)getAllSystemInfo;
+ (id)sharedInstance;
+ (void)setup;

- (void)bdl_bindServiceClass:(Class)a0 toProtocol:(id)a1;
- (id)bdl_serviceWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
