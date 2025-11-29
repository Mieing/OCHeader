@class NSString, TIMXPBNCSBModifyMsgInfoExtEvent, TIMXPBNCSBConversationMarkReadEvent, TIMXPBNCSBConversationCountStatusChangeEvent, TIMXPBNCSBModifyConversationExtEvent, TIMXPBNCSBConversationStatusChangeEvent, TIMXPBNCSBConversationDeleteEvent, TIMXPBNCSBMessage;

@interface TIMXPBNNewCSBMessageNotify : GPBMessage

@property (nonatomic) int csbBizId;
@property (nonatomic) BOOL hasCsbBizId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationVersion;
@property (nonatomic) BOOL hasConversationVersion;
@property (nonatomic) long long previousConversationVersion;
@property (nonatomic) BOOL hasPreviousConversationVersion;
@property (nonatomic) long long toUserId;
@property (nonatomic) BOOL hasToUserId;
@property (retain, nonatomic) TIMXPBNCSBMessage *message;
@property (nonatomic) BOOL hasMessage;
@property (retain, nonatomic) TIMXPBNCSBConversationMarkReadEvent *markReadEvent;
@property (nonatomic) BOOL hasMarkReadEvent;
@property (retain, nonatomic) TIMXPBNCSBConversationDeleteEvent *convDeleteEvent;
@property (nonatomic) BOOL hasConvDeleteEvent;
@property (retain, nonatomic) TIMXPBNCSBConversationCountStatusChangeEvent *convCountStatusChangeEvent;
@property (nonatomic) BOOL hasConvCountStatusChangeEvent;
@property (retain, nonatomic) TIMXPBNCSBConversationStatusChangeEvent *convStatusChangeEvent;
@property (nonatomic) BOOL hasConvStatusChangeEvent;
@property (nonatomic) int inboxType;
@property (nonatomic) BOOL hasInboxType;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) int importantBadgeCount;
@property (nonatomic) BOOL hasImportantBadgeCount;
@property (retain, nonatomic) TIMXPBNCSBModifyMsgInfoExtEvent *modifyMsgExtEvent;
@property (nonatomic) BOOL hasModifyMsgExtEvent;
@property (retain, nonatomic) TIMXPBNCSBModifyConversationExtEvent *modifyConvExtEvent;
@property (nonatomic) BOOL hasModifyConvExtEvent;

+ (id)descriptor;

@end
