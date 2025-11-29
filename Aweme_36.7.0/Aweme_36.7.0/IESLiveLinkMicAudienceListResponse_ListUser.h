@class IESLiveListUserEventInfo, NSString, IESLiveLinkHostInfo, IESLiveListUserTag, HTSLiveJoinTeamfightInfo, IESLiveLinkedListUserInfo, IESLiveMicPosTagInfo, GPBEnumArray, HTSLiveUser, NSMutableArray, IESLiveInviteListUserInfo, IESLiveWaitingListUserInfo;

@interface IESLiveLinkMicAudienceListResponse_ListUser : IESLivePBBaseMessage

@property (nonatomic) double connectionStartTime;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long linkmicId;
@property (nonatomic) long long modifyTime;
@property (nonatomic) int linkStatus;
@property (nonatomic) int linkType;
@property (nonatomic) int roleType;
@property (nonatomic) long long userPosition;
@property (nonatomic) int silenceStatus;
@property (nonatomic) long long fanTicket;
@property (nonatomic) long long payedMoney;
@property (nonatomic) long long linkDuration;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) int userRelationType;
@property (nonatomic) long long modifyTimeInNano;
@property (nonatomic) BOOL hostPermission;
@property (retain, nonatomic) NSMutableArray *songListArray;
@property (readonly, nonatomic) unsigned long long songListArray_Count;
@property (nonatomic) long long appId;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (nonatomic) BOOL isActive;
@property (nonatomic) int listUserType;
@property (nonatomic) int listUserFromType;
@property (retain, nonatomic) IESLiveWaitingListUserInfo *waitingListUserInfo;
@property (nonatomic) BOOL hasWaitingListUserInfo;
@property (nonatomic) long long mcStatus;
@property (retain, nonatomic) HTSLiveUser *invitor;
@property (nonatomic) BOOL hasInvitor;
@property (retain, nonatomic) IESLiveInviteListUserInfo *inviteListUserInfo;
@property (nonatomic) BOOL hasInviteListUserInfo;
@property (retain, nonatomic) IESLiveLinkedListUserInfo *linkedListUserInfo;
@property (nonatomic) BOOL hasLinkedListUserInfo;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) GPBEnumArray *interestedTypeArray;
@property (readonly, nonatomic) unsigned long long interestedTypeArray_Count;
@property (nonatomic) int inviteeType;
@property (nonatomic) BOOL isPlayVideo;
@property (nonatomic) long long lastInvitedTimeMs;
@property (retain, nonatomic) HTSLiveJoinTeamfightInfo *joinTeamfightInfo;
@property (nonatomic) BOOL hasJoinTeamfightInfo;
@property (copy, nonatomic) NSString *fuzzyFanTicket;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) long long addPriceTimeMs;
@property (retain, nonatomic) IESLiveLinkHostInfo *host;
@property (nonatomic) BOOL hasHost;
@property (retain, nonatomic) IESLiveMicPosTagInfo *micPosTagInfo;
@property (nonatomic) BOOL hasMicPosTagInfo;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) int applyType;
@property (nonatomic) BOOL alreadyInvited;
@property (retain, nonatomic) IESLiveListUserEventInfo *eventInfo;
@property (nonatomic) BOOL hasEventInfo;
@property (nonatomic) long long chorusGuestStatus;
@property (retain, nonatomic) IESLiveListUserTag *tag;
@property (nonatomic) BOOL hasTag;

+ (id)descriptor;

- (id)initWithUser:(id)a0 uid:(long long)a1;
- (id)waitingDesStringWithNowTime:(id)a0 isAddPrice:(BOOL)a1;

@end
