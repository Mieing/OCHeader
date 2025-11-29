@class NSString;

@interface PushRefreshActionbarResponse : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;

+ (id)descriptor;

@end
