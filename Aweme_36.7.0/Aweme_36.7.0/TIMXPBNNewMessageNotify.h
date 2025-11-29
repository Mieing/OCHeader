@class TIMXPBNMsgTrace, NSString, TIMXPBNReferenceInfo, TIMXPBNConvUnreadUnion, TIMXPBNThreadBadgeCountInfo, TIMXPBNMessageBody, TIMXPBNMuteBadgeCountInfo;

@interface TIMXPBNNewMessageNotify : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int notifyType;
@property (nonatomic) BOOL hasNotifyType;
@property (retain, nonatomic) TIMXPBNMessageBody *message;
@property (nonatomic) BOOL hasMessage;
@property (nonatomic) long long previousCursor;
@property (nonatomic) BOOL hasPreviousCursor;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) long long indexInConversation;
@property (nonatomic) BOOL hasIndexInConversation;
@property (nonatomic) long long indexInConversationV2;
@property (nonatomic) BOOL hasIndexInConversationV2;
@property (nonatomic) long long conversationVersion;
@property (nonatomic) BOOL hasConversationVersion;
@property (nonatomic) long long previousConversationVersion;
@property (nonatomic) BOOL hasPreviousConversationVersion;
@property (nonatomic) long long cmdMessageIndex;
@property (nonatomic) BOOL hasCmdMessageIndex;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (retain, nonatomic) TIMXPBNMsgTrace *trace;
@property (nonatomic) BOOL hasTrace;
@property (retain, nonatomic) TIMXPBNReferenceInfo *refMsgInfo;
@property (nonatomic) BOOL hasRefMsgInfo;
@property (nonatomic) long long previousMsgIndexInConv;
@property (nonatomic) BOOL hasPreviousMsgIndexInConv;
@property (nonatomic) long long readconvVersion;
@property (nonatomic) BOOL hasReadconvVersion;
@property (nonatomic) long long preReadconvVersion;
@property (nonatomic) BOOL hasPreReadconvVersion;
@property (retain, nonatomic) TIMXPBNMuteBadgeCountInfo *muteBadgeCountInfo;
@property (nonatomic) BOOL hasMuteBadgeCountInfo;
@property (nonatomic) long long subConversationShortId;
@property (nonatomic) BOOL hasSubConversationShortId;
@property (nonatomic) BOOL needPull;
@property (nonatomic) BOOL hasNeedPull;
@property (retain, nonatomic) TIMXPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;
@property (nonatomic) long long toUserId;
@property (nonatomic) BOOL hasToUserId;
@property (nonatomic) long long threadVersion;
@property (nonatomic) BOOL hasThreadVersion;
@property (nonatomic) long long preThreadVersion;
@property (nonatomic) BOOL hasPreThreadVersion;
@property (nonatomic) long long readThreadVersion;
@property (nonatomic) BOOL hasReadThreadVersion;
@property (nonatomic) long long preReadThreadVersion;
@property (nonatomic) BOOL hasPreReadThreadVersion;
@property (retain, nonatomic) TIMXPBNThreadBadgeCountInfo *threadBadgeCountInfo;
@property (nonatomic) BOOL hasThreadBadgeCountInfo;
@property (nonatomic) long long cmdMessageChainV2Index;
@property (nonatomic) BOOL hasCmdMessageChainV2Index;
@property (nonatomic) long long cmdMessageConvVersion;
@property (nonatomic) BOOL hasCmdMessageConvVersion;
@property (nonatomic) long long preCmdMessageConvVersion;
@property (nonatomic) BOOL hasPreCmdMessageConvVersion;

+ (id)descriptor;

- (id)trace;

@end
