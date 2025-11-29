@class TIMXPBNDeletedConversationBasicInfo;

@interface TIMXPBNRestoreDeletedConversationRequestInfo : GPBMessage

@property (retain, nonatomic) TIMXPBNDeletedConversationBasicInfo *conversation;
@property (nonatomic) BOOL hasConversation;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) int limit;
@property (nonatomic) BOOL hasLimit;

+ (id)descriptor;

@end
