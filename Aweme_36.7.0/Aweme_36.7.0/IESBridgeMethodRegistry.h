@class NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESBridgeMethodRegistry : NSObject

@property (retain, nonatomic) NSMutableArray *methodsArray;
@property (retain, nonatomic) NSMutableDictionary *methodsMap;
@property (copy, nonatomic) NSArray *namespaceOrdered;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *piperRegisterQueue;
@property (nonatomic) BOOL isMapRegistry;

- (id)findMethodForMessage:(id)a0;
- (void)addBridgeMethod:(id)a0;
- (void)_addBridgeMethodToMap:(id)a0;
- (void)_addBridgeMethodToArray:(id)a0;
- (void)_removeBridgeMethodFromMap:(id)a0;
- (void)_removeBridgeMethodFromArray:(id)a0;
- (id)_findMethodInMapForMessage:(id)a0;
- (id)_findMethodInArrayForMessage:(id)a0;
- (void)removeBridgeMethod:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)allMethods;

@end
