@class NSString, EcsActionHandler_Base;

@interface WAJSEventHandler_handleEcsAction : WAJSEventHandler_BaseEvent <EcsActionHandlerDelegate>

@property (retain, nonatomic) EcsActionHandler_Base *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)dispatchHandleJSAction:(id)a0 extraData:(id)a1;
- (void)dealloc;
- (void)callerMacroEnd:(long long)a0 optionalArg1:(id)a1 optionalArg2:(id)a2 actionHandler:(id)a3;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (BOOL)isRunningInSheetMode;
- (id)getAbosulteFilePath:(id)a0;
- (BOOL)sendEvent:(id)a0;
- (id)getContact;
- (void).cxx_destruct;

@end
