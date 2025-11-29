@class NSString, TIMXPBNDiffParticipantsInfo, TIMXPBNParticipantsPage;

@interface TIMXPBNConversationMemberList : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long memberVersion;
@property (nonatomic) BOOL hasMemberVersion;
@property (nonatomic) long long participantsCount;
@property (nonatomic) BOOL hasParticipantsCount;
@property (retain, nonatomic) TIMXPBNParticipantsPage *fullParticipantsPage;
@property (nonatomic) BOOL hasFullParticipantsPage;
@property (retain, nonatomic) TIMXPBNDiffParticipantsInfo *diffParticipantsInfo;
@property (nonatomic) BOOL hasDiffParticipantsInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMsg;
@property (nonatomic) BOOL hasCheckMsg;

+ (id)descriptor;

@end
