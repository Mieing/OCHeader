@interface TIMXPBNMarkConversationMessageReadRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long receiverIndex;
@property (nonatomic) BOOL hasReceiverIndex;

+ (id)descriptor;

@end
