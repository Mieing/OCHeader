@class NSString, NSMutableArray;

@interface WebviewJSEventHandler_handleEcsAction : WebviewJSEventHandlerBase <EcsActionHandlerDelegate>

@property (retain, nonatomic) NSMutableArray *arrActionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)callerMacroEnd:(long long)a0 optionalArg1:(id)a1 optionalArg2:(id)a2 actionHandler:(id)a3;
- (id)callerContextViewController;
- (id)callerNavigationController;
- (void)internalEndWithState:(long long)a0 msg:(id)a1 dic:(id)a2;
- (id)getAbosulteFilePath:(id)a0;
- (BOOL)sendEvent:(id)a0;
- (id)getContact;
- (void)notifyContextViewVisibilityChangedIfNeeded:(BOOL)a0;
- (void).cxx_destruct;

@end
