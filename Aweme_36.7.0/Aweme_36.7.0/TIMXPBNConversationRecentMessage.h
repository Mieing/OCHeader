@class TIMXPBNConvUnreadUnion, NSString, TIMXPBNThreadBadgeCountInfo, TIMXPBNConversationReadInfo, TIMXPBNStrangerInfo, NSMutableArray, TIMXPBNThreadProperty;

@interface TIMXPBNConversationRecentMessage : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSMutableArray *extMessagesArray;
@property (readonly, nonatomic) unsigned long long extMessagesArray_Count;
@property (retain, nonatomic) TIMXPBNStrangerInfo *strangerInfo;
@property (nonatomic) BOOL hasStrangerInfo;
@property (retain, nonatomic) NSMutableArray *muteBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteBadgeCountInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *hintInfosArray;
@property (readonly, nonatomic) unsigned long long hintInfosArray_Count;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long parentConvShortId;
@property (nonatomic) BOOL hasParentConvShortId;
@property (retain, nonatomic) TIMXPBNThreadBadgeCountInfo *threadBadgeCountInfo;
@property (nonatomic) BOOL hasThreadBadgeCountInfo;
@property (nonatomic) long long rootMessageId;
@property (nonatomic) BOOL hasRootMessageId;
@property (copy, nonatomic) NSString *rootClientMessageId;
@property (nonatomic) BOOL hasRootClientMessageId;
@property (retain, nonatomic) TIMXPBNThreadProperty *threadProperty;
@property (nonatomic) BOOL hasThreadProperty;
@property (retain, nonatomic) TIMXPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;
@property (retain, nonatomic) TIMXPBNConversationReadInfo *recentReadInfo;
@property (nonatomic) BOOL hasRecentReadInfo;

+ (id)descriptor;

@end
