@class NSString;

@interface TIMXPBNMarkCSBConversationReadRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) BOOL hasReadBadgeCount;
@property (nonatomic) int readImportantBadgeCount;
@property (nonatomic) BOOL hasReadImportantBadgeCount;
@property (nonatomic) int csbBizId;
@property (nonatomic) BOOL hasCsbBizId;

+ (id)descriptor;

@end
