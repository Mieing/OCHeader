@class NSString, TIMXSDKInstance;
@protocol IESIMIncentiveChatCommandMsgNotifierDelegate;

@interface IESIMIncentiveChatCommandMsgNotifier : NSObject <TIMXOChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, IESIMIncentiveChatCommandMsgNotifierProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) NSString *observerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMIncentiveChatCommandMsgNotifierDelegate> delegate;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)p_setup;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)didReceiveIncentiveChatCommandMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
