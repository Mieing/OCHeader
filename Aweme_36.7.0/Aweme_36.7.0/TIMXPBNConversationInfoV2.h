@class TIMXPBNThreadProperty, NSString, TIMXPBNConversationCoreInfo, TIMXPBNSubConversation, TIMXPBNConversationSettingInfo, TIMXPBNParticipant, TIMXPBNConvUnreadUnion, TIMXPBNDiffMemberInfo, NSMutableArray, TIMXPBNParticipantsPage, TIMXPBNThreadBadgeCountInfo;

@interface TIMXPBNConversationInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (retain, nonatomic) TIMXPBNParticipantsPage *firstPageParticipants;
@property (nonatomic) BOOL hasFirstPageParticipants;
@property (nonatomic) int participantsCount;
@property (nonatomic) BOOL hasParticipantsCount;
@property (nonatomic) BOOL isParticipant;
@property (nonatomic) BOOL hasIsParticipant;
@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (retain, nonatomic) NSMutableArray *muteBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteBadgeCountInfosArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) TIMXPBNThreadBadgeCountInfo *threadBadgeCountInfo;
@property (nonatomic) BOOL hasThreadBadgeCountInfo;
@property (retain, nonatomic) TIMXPBNThreadProperty *threadProperty;
@property (nonatomic) BOOL hasThreadProperty;
@property (retain, nonatomic) TIMXPBNDiffMemberInfo *diffMemberInfo;
@property (nonatomic) BOOL hasDiffMemberInfo;
@property (retain, nonatomic) TIMXPBNParticipant *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long onlineMemberCount;
@property (nonatomic) BOOL hasOnlineMemberCount;
@property (retain, nonatomic) TIMXPBNConversationCoreInfo *conversationCoreInfo;
@property (nonatomic) BOOL hasConversationCoreInfo;
@property (retain, nonatomic) TIMXPBNConversationSettingInfo *conversationSettingInfo;
@property (nonatomic) BOOL hasConversationSettingInfo;
@property (nonatomic) long long lastMessageIndexv2;
@property (nonatomic) BOOL hasLastMessageIndexv2;
@property (retain, nonatomic) TIMXPBNSubConversation *currentSubConv;
@property (nonatomic) BOOL hasCurrentSubConv;
@property (retain, nonatomic) NSMutableArray *botsArray;
@property (readonly, nonatomic) unsigned long long botsArray_Count;
@property (retain, nonatomic) TIMXPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;

+ (id)descriptor;

@end
