@class NSString, NSMutableDictionary;

@interface TIMXPBNCSBConversationInfo : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) BOOL hasReadBadgeCount;
@property (nonatomic) int readImportantBadgeCount;
@property (nonatomic) BOOL hasReadImportantBadgeCount;
@property (nonatomic) long long minIndex;
@property (nonatomic) BOOL hasMinIndex;
@property (nonatomic) int conversationCountStatus;
@property (nonatomic) BOOL hasConversationCountStatus;
@property (nonatomic) int conversationStatus;
@property (nonatomic) BOOL hasConversationStatus;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) int importantBadgeCount;
@property (nonatomic) BOOL hasImportantBadgeCount;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
