@class NSString;

@interface AWEIMConIncentiveAnimationComponent : AWEIMComponentBase <AWEIMInteractiveEmojiAnimationObservable, AWEIMConIncentiveChatDataUpdateAction, AWEIMMessageListUserInfoAction, AWEIMIncentiveChatServiceMessage>

@property (nonatomic) BOOL isChatNotOnScreen;
@property (copy, nonatomic) NSString *playAnimationNameForGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didEndPlayAnimation:(id)a0 fromMessages:(id)a1 isPlayFinished:(BOOL)a2 isPlaySuccess:(BOOL)a3;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_viewWillDisappear;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_viewDidAppear;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (void)didChangeRelationOldStatus:(unsigned long long)a0 newStatus:(unsigned long long)a1;
- (void)p_tryPlayOpenIncentiveChatAnimation;
- (BOOL)canShowIncentiveOpenAnimation;
- (void)p_playOpenIncentiveChatAnimation;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;

@end
