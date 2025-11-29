@class AWEIMUser, AWEUserModel, NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEIMMessageListUserInfoComponent : AWEIMComponentBase <AWEIMMessageListUserInfoInterface, IESLCMessageHandlerService>

@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain, nonatomic) AWEUserModel *peerDetailUser;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)p_componentDidMounted:(id)a0;
- (void)p_oldVCFetchUserMethod:(id)a0 fullDetailUser:(id)a1;
- (void)p_fetchPeerUserWithCompletion:(id /* block */)a0;
- (void)p_handlePushPayload:(id)a0;
- (void).cxx_destruct;

@end
