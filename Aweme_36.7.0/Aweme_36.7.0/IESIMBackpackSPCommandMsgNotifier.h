@class NSString, TIMXSDKInstance;
@protocol IESIMBackpackSPCommandMsgNotifierProtocolDelegate;

@interface IESIMBackpackSPCommandMsgNotifier : NSObject <TIMXOChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, IESIMBackpackSPCommandMsgNotifierProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) NSString *observerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMBackpackSPCommandMsgNotifierProtocolDelegate> delegate;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)didReceiveBackpackSPCommandMessage:(id)a0;
- (void)setupChangeObserver;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
