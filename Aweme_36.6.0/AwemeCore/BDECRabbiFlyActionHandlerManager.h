@class NSString, NSMutableDictionary, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyActionHandlerManager : NSObject <BDECRabbiFlyIActionHandlerManager>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMutableDictionary *handlerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBasicActionList;
- (void)registerBasicActionHandler:(id)a0 forAction:(id)a1;
- (id)initWithSupervisor:(id)a0;
- (void)registerHandler:(id)a0 forAction:(id)a1;
- (void)unregisterHandlerForAction:(id)a0;
- (id)getHandlerForAction:(id)a0;
- (void).cxx_destruct;

@end
