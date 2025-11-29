@class NSString, NSMutableArray;

@interface TIMXPBNClearConversationMessageV2RequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long lastMessageIndex;
@property (nonatomic) BOOL hasLastMessageIndex;
@property (nonatomic) long long lastMessageIndexV2;
@property (nonatomic) BOOL hasLastMessageIndexV2;
@property (nonatomic) int lastMsgBadgeCount;
@property (nonatomic) BOOL hasLastMsgBadgeCount;
@property (retain, nonatomic) NSMutableArray *muteBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteBadgeCountInfosArray_Count;
@property (nonatomic) long long lastMessageTime;
@property (nonatomic) BOOL hasLastMessageTime;
@property (nonatomic) int totalThreadImportantBadgeCount;
@property (nonatomic) BOOL hasTotalThreadImportantBadgeCount;

+ (id)descriptor;

@end
