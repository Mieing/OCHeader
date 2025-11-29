@class NSString;

@interface TIMXPBNGetConversationMemberListRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int syncScene;
@property (nonatomic) BOOL hasSyncScene;
@property (nonatomic) long long localMemberVersion;
@property (nonatomic) BOOL hasLocalMemberVersion;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL hasLimit;

+ (id)descriptor;

@end
