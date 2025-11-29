@class NSString, NSMutableSet, BDECRabbiFlyDynamicSupervisor, NSMutableArray;

@interface BDECRabbiFlyBridgeHandlerManager : NSObject <BDECRabbiFlyIBridgeHandlerManager>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMutableArray *handlerList;
@property (retain, nonatomic) NSMutableSet *handlerSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getBridgeHandlerList;
- (id)initWithSupervisor:(id)a0;
- (void)addBridgeHandler:(id)a0;
- (void)removeBridgeHandler:(id)a0;
- (void).cxx_destruct;

@end
