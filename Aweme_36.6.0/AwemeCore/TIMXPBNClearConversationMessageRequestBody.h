@class NSString;

@interface TIMXPBNClearConversationMessageRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long lastMessageIndex;
@property (nonatomic) BOOL hasLastMessageIndex;

+ (id)descriptor;

@end
