@class NSString, EcsActionHandler_Base;

@interface MBEventHandler_handleEcsAction : MBEventHandlerBaseAsync <EcsActionHandlerDelegate>

@property (retain, nonatomic) EcsActionHandler_Base *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invoke:(id)a0;
- (void)callerMacroEnd:(long long)a0 optionalArg1:(id)a1 optionalArg2:(id)a2 actionHandler:(id)a3;
- (void)internalEndWithState:(long long)a0 msg:(id)a1 dic:(id)a2;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (id)getAbosulteFilePath:(id)a0;
- (BOOL)sendEvent:(id)a0;
- (id)getContact;
- (id)apiName;
- (BOOL)invokeInMainThread;
- (void).cxx_destruct;

@end
