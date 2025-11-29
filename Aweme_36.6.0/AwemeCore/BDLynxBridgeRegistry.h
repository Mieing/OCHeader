@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDLynxBridgeRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *methodsMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *piperRegisterQueue;

+ (id)sharedRegistry;

- (id)findMethodForMessage:(id)a0;
- (void)addBridgeMethod:(id)a0;
- (void)removeMethod:(id)a0;
- (id)initShared;
- (id)methodKeyWithMethodName:(id)a0 namescope:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;
- (id)allMethods;

@end
