@class AWEIMUser, NSString, AWEIMComponentManager, BFTask, BFTaskCompletionSource, AWEUserModel;

@interface AWEIMMessageListEnterChatComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListUserInfoAction, AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageListEnterChatInterface>

@property (retain, nonatomic) BFTaskCompletionSource *didFetchPeerUserTaskSource;
@property (retain, nonatomic) BFTaskCompletionSource *didFetchMsgTaskSource;
@property (retain, nonatomic) BFTaskCompletionSource *didCreateConTaskSource;
@property (retain, nonatomic) BFTaskCompletionSource *didHostViewAppearTaskSource;
@property (retain, nonatomic) BFTask *requestRightNowTask;
@property (retain, nonatomic) BFTask *requestWaitUserAndLastMsgReadyTask;
@property (retain, nonatomic) AWEIMUser *peerIMUser;
@property (retain, nonatomic) AWEUserModel *peerAweUser;
@property (nonatomic) BOOL firstRe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didFetchEnterChatErrorWithSource:(long long)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_viewDidAppear;
- (id)vcParent;
- (void)requestEnterChatWithSource:(long long)a0;
- (id)p_commonParams:(long long)a0;
- (void)p_trackWithRequestError:(id)a0 requestDuration:(int)a1 source:(long long)a2 extraTrackParams:(id)a3;
- (void)messageListEnterChatRequestWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)haveMessageInChat;
- (void).cxx_destruct;
- (id)lastMessage;

@end
