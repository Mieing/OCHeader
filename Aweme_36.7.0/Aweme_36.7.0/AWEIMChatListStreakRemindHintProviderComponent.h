@class NSString;

@interface AWEIMChatListStreakRemindHintProviderComponent : AWEIMChatListHintProviderComponentBase <AWEIMStreakDataCenterMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)imStreakDataDidUpdateWithConversation:(id)a0;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)updateHintWhenFlameInfoChangeWithCellContext:(id)a0;
- (void)updateHintVMWithChatModel:(id)a0;
- (void)updateHintVMWithConversation:(id)a0 peerUser:(id)a1 unreadCount:(long long)a2;
- (id)hintTextWithConversation:(id)a0 peerUser:(id)a1 isRecoverStatus:(BOOL)a2;
- (void)__updateHintWithContent:(id)a0 conversationId:(id)a1;
- (void)dealloc;

@end
