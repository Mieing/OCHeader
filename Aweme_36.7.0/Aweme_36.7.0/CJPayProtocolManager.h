@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayProtocolManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *protocolToObjectMap;
@property (retain, nonatomic) NSMutableDictionary *protocolToClassMap;
@property (retain, nonatomic) NSMutableDictionary *sharedSelectorNameToClassMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;

+ (id)getObjectWithProtocol:(id)a0;
+ (Class)getClassWithProtocol:(id)a0;
+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (void)unbindProtocol:(id)a0;
+ (void)bindObject:(id)a0 toProtocol:(id)a1;
+ (void)bindClass:(Class)a0 withSharedSelector:(SEL)a1 toProtocol:(id)a2;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
