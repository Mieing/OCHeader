@class NSString;

@interface AWEIMMessageListIncentiveChatMangoFakeInviteNoticeComponent : AWEIMComponentBase <AWEIMComponentHostVCLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidAppear;
- (void)hostVC_afterFirstRender;
- (void)p_makeFakeInviteNotice;
- (id)currentPeerUser;
- (id)p_frequencyUserKey;
- (id)p_frequencyConversationKey;
- (BOOL)p_canFakeMangoInviteNotice;
- (id)currentConversation;

@end
