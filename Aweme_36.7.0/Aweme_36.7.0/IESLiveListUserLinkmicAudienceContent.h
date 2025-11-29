@class NSString, HTSLiveLinkmic2DAvatar, IESLiveMicDress, NSMutableArray;

@interface IESLiveListUserLinkmicAudienceContent : IESLivePBBaseMessage

@property (nonatomic) long long fanTicket;
@property (nonatomic) BOOL hostPermission;
@property (nonatomic) long long appId;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (nonatomic) long long joinChannelTime;
@property (nonatomic) long long expectedLeaveTime;
@property (nonatomic) BOOL inWaitingList;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long currentTime;
@property (copy, nonatomic) NSString *fanTicketFuzzyStr;
@property (nonatomic) int listUserRole;
@property (copy, nonatomic) NSString *fanTicketRealStr;
@property (retain, nonatomic) NSMutableArray *rankContributorIdsArray;
@property (readonly, nonatomic) unsigned long long rankContributorIdsArray_Count;
@property (retain, nonatomic) IESLiveMicDress *micDress;
@property (nonatomic) BOOL hasMicDress;
@property (nonatomic) long long paidCount;
@property (nonatomic) BOOL isEnlarged;
@property (nonatomic) long long selfDisciplineDuration;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) int applyType;
@property (nonatomic) long long selfDisciplineStartTimeMs;
@property (nonatomic) long long selfDisciplineStartTime;
@property (nonatomic) long long selfDiscriplineTargetDuration;
@property (copy, nonatomic) NSString *deviceIdStr;
@property (nonatomic) int themedCompetitionRole;
@property (retain, nonatomic) HTSLiveLinkmic2DAvatar *linkmic2DAvatar;
@property (nonatomic) BOOL hasLinkmic2DAvatar;
@property (nonatomic) long long chorusGuestStatus;
@property (nonatomic) long long originLinkType;
@property (nonatomic) int aiGuestType;
@property (nonatomic) int aiGuestTypeInt;

+ (id)descriptor;

@end
