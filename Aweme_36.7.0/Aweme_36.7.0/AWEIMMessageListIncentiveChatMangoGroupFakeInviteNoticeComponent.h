@class NSString;

@interface AWEIMMessageListIncentiveChatMangoGroupFakeInviteNoticeComponent : AWEIMComponentBase <AWEIMConIncentiveChatDataUpdateAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didChangeRelationOldStatus:(unsigned long long)a0 newStatus:(unsigned long long)a1;
- (void)infoOtherIncentiveChatDataHandleFinishWithCid:(id)a0;
- (void)p_makeFakeInviteNotice;
- (BOOL)p_isUserHasInviteQuota;
- (BOOL)p_isConversationHasShowNotice;
- (id)p_getStorageKey;
- (BOOL)p_canShowFakeNotice;
- (void)dealloc;

@end
