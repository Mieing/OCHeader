@class NSString, NSMutableArray, TIMXSDKInstance;
@protocol IESIMRTVCommandMsgNotifierDelegate;

@interface IESIMRTVCommandMsgNotifier : NSObject <TIMXOChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage, IESIMRTVCommandMsgNotifierProtocol>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) NSString *observerToken;
@property (retain, nonatomic) NSMutableArray *stashMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMRTVCommandMsgNotifierDelegate> delegate;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)didReceiveRTVCommandMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
