@class NSString, AWEUserModel;

@interface AWEIMMessageListPrivateMsgTipComponent : AWEIMMessageListTopFloatingBaseComponent <AWEUserMessage, AWEIMTopNoticeTipInteractorProtocol, AWEIMMessageListUserInfoAction>

@property (retain, nonatomic) AWEUserModel *peerUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (void)p_fetchEnableShow:(id /* block */)a0;
- (BOOL)p_isBetween14And18YearOld;
- (BOOL)p_onlyFriendCanMessage;
- (void)saveStatusToStorage;
- (BOOL)p_noOneCanMessage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contentText;

@end
