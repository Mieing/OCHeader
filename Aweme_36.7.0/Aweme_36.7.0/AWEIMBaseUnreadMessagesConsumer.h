@class NSString;
@protocol AWEIMUnreadMessagesConsumerDelegate;

@interface AWEIMBaseUnreadMessagesConsumer : AWEIMChatListHintProviderComponentBase <AWEIMUnreadMessageConsumerPotocol>

@property (weak, nonatomic) id<AWEIMUnreadMessagesConsumerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableConsumer;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)identifier;

- (id)iesMessagesFromMsgIds:(id)a0 conversationId:(id)a1;
- (id)targetFilterOptionsForUnreadMessagesInChat:(id)a0;
- (id)generateHintForConversation:(id)a0 filterOption:(id)a1;
- (BOOL)handleUnreadMessagesFromDB:(id)a0 conversationId:(id)a1 filterOption:(id)a2;
- (id)onConversationDataSourceMessagesUpdated:(id)a0 con:(id)a1;
- (id)onConversationDataSourceMessagesCreated:(id)a0 con:(id)a1;
- (id)generateHintModelForStrangerConversation:(id)a0 filterOptions:(id)a1;
- (void)handleFilterOptionToMessages:(id)a0 conversationId:(id)a1;
- (id)generateHintModelForConversation:(id)a0 filterOptions:(id)a1;
- (id)generateHintForConversation:(id)a0 filterOptions:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
