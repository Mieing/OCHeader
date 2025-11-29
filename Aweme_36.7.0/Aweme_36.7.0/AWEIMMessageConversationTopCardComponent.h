@class AWEIMMessageConversation, AWEIMMessage, NSString, AWEUserModel, AWEIMServiceChatRoleExpressionResponse;
@protocol AWEIMMessageDataProtocol;

@interface AWEIMMessageConversationTopCardComponent : AWEIMComponentBase <AWEIMMedicalTopCardComponentInterface, AWEIMMessageListUserInfoAction, AWEIMMessageListEnterChatSubscriberProtocol>

@property (nonatomic) unsigned long long insertState;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (retain, nonatomic) AWEIMServiceChatRoleExpressionResponse *roleExpressionResponse;
@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMMessage *currentTopMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (BOOL)isCurrentTopMessageVisable;
- (void)addTopCardMessageIfNeed:(id)a0 didEndFetchUser:(id)a1;
- (BOOL)enableMedicalCardWithConversation:(id)a0;
- (void)__checkAddTopCardReasonLocalUser;
- (void)__checkAddTopCardReasonFullUser;
- (void)logCurrentUserRole;
- (id)getTopCardMemoryMessage:(long long)a0;
- (BOOL)addTopCardMessage:(id)a0 didEndFetchUser:(id)a1;
- (BOOL)enableTopCardExpOpt;
- (BOOL)enableInsertTopMemoryMessageWithConversation:(id)a0;
- (void)deleteStrangerTopMemoryMessage;
- (void)fetchExpressionInfo:(id)a0 key:(id)a1 type:(int)a2;
- (long long)checkTopMessageType;
- (id)deleteCurrentTopMemoryMessage;
- (void).cxx_destruct;

@end
