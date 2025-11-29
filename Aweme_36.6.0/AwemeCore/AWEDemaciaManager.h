@class NSMutableDictionary, NSRecursiveLock;

@interface AWEDemaciaManager : NSObject

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToObjectMap;
@property (retain) NSRecursiveLock *recLock;

+ (id)getObjectWithProtocol:(id)a0;
+ (Class)getClassWithProtocol:(id)a0;
+ (id)sharedInstance;

- (id)getObjectWithProtocol:(id)a0;
- (Class)getClassWithProtocol:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (id)adapterMapDict;
- (void).cxx_destruct;
- (id)init;

@end
