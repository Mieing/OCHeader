@class NSString, AWEUserModel;

@interface AWEIMConversationFullUserComponent : AWEIMComponentBase <AWEIMConversationFullUserProtocol, AWEUserMessage, AWEIMContactMessage>

@property (nonatomic) BOOL firstFrameOpt;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (void)didFetchFullDetailUser:(id)a0;
- (void)didChangePrivacyState:(id)a0;
- (void)didFetchUserFinishedWillDeleteAfterRefactor:(id)a0 fullDetailUser:(id)a1;
- (void)p_viewDidLoad;
- (BOOL)p_isConversationUnAccept;
- (void).cxx_destruct;

@end
