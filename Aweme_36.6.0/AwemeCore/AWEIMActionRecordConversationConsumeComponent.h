@class NSString, AWEIMConversationContext, BDXBridgeEventSubscriber, NSMutableArray;

@interface AWEIMActionRecordConversationConsumeComponent : AWEIMComponentBase <AWEIMActionRecordControllerMessage, AWEIMActionRecordExecuteMessage>

@property (weak, nonatomic) AWEIMConversationContext *context;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) NSMutableArray *triggeringAlert;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bridgeEventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_viewWillDisappear;
- (void)p_viewDidAppear;
- (void)__log:(id)a0;
- (void)removeLynxEventObservers;
- (void)addLynxEventObservers;
- (void)actionRecordController:(id)a0 didAddRecord:(id)a1;
- (void)didExecuteActionRecordWithIdentifier:(id)a0 covnersationShortID:(id)a1 type:(long long)a2 extraInfo:(id)a3;
- (void)__consumeOpenRedPacketActionIfNeeded;
- (id)__validPopupTypes;
- (void)__handleAppWillResignActive:(id)a0;
- (void)__handleAppDidBecomeActive:(id)a0;
- (BOOL)__canShowOpenRedPacketRecord;
- (BOOL)__showWithRecord:(id)a0;
- (id)__alertIdentifierFromActionRecord:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)__isActive;

@end
