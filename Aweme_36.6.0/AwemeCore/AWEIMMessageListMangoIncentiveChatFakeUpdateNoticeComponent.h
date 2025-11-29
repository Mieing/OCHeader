@class NSString;

@interface AWEIMMessageListMangoIncentiveChatFakeUpdateNoticeComponent : AWEIMComponentBase <AWEIMComponentHostVCLifeCycle, AWEIMMessageListMangoIncentiveChatFakeUpdateNoticeComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)tryTriggerMangoIncentiveChatFakeUpdateNotice;
- (id)currentPeerUser;
- (id)p_frequencyUserKey;
- (id)p_frequencyConversationKey;
- (BOOL)p_canFakeMangoUpdateNotice;
- (void)p_makeFakeMangoUpdateNoticeIfNeed;
- (void)dealloc;
- (id)currentConversation;

@end
