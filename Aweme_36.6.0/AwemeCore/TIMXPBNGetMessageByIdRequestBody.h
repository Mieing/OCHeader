@class NSString;

@interface TIMXPBNGetMessageByIdRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (nonatomic) BOOL onlyStatus;
@property (nonatomic) BOOL hasOnlyStatus;

+ (id)descriptor;

@end
