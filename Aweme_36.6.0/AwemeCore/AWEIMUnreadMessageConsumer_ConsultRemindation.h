@class NSString;
@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMUnreadMessageConsumer_ConsultRemindation : AWEIMBaseUnreadMessagesConsumer <AWEUserMessage> {
    id<AWEIMUnreadMessagesConsumerDelegate> delegate;
}

@property (nonatomic) BOOL hasEnterpriseModeAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableConsumer;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (BOOL)isCompatibleWithTimeText;
- (void)__didChangeMessageTabMode:(id)a0;
- (BOOL)__canGenerateHintsForConversationId:(id)a0 filterOption:(id)a1;
- (BOOL)__filterAndCacheMessagesFrom:(id)a0 conversationId:(id)a1 filterOption:(id)a2 checkUnread:(BOOL)a3;
- (id)__processCreatedOrUpdatedMessages:(id)a0 con:(id)a1 checkUnread:(BOOL)a2;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesUpdated:(id)a0 con:(id)a1;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (BOOL)__canQueryForConsultRemindationWithCon:(id)a0;
- (long long)hintLineBreakMode;
- (id)incompatibleMessageTabModes;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)a0;

@end
