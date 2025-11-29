@class HTSLiveUser, NSString, SecretChatInfo, FansChannelCreateInfo, NSMutableArray, RtcExtInfo;

@interface RoomChannelInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isFromCreate;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL needJoin;
@property (nonatomic) BOOL canAccessChannel;
@property (nonatomic) BOOL accessed;
@property (copy, nonatomic) NSString *accessErrorToast;
@property (nonatomic) long long channelId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isOwner;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) NSMutableArray *topUserArray;
@property (readonly, nonatomic) unsigned long long topUserArray_Count;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) int roomChannelMode;
@property (retain, nonatomic) HTSLiveUser *needApprovalUser;
@property (nonatomic) BOOL hasNeedApprovalUser;
@property (retain, nonatomic) HTSLiveUser *owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) long long maxMemberCount;
@property (nonatomic) long long createType;
@property (retain, nonatomic) SecretChatInfo *secretChatInfo;
@property (nonatomic) BOOL hasSecretChatInfo;
@property (copy, nonatomic) NSString *channelIdStr;
@property (nonatomic) BOOL enableAnnouncement;
@property (copy, nonatomic) NSString *channelAnnouncement;
@property (retain, nonatomic) FansChannelCreateInfo *fansCreateInfo;
@property (nonatomic) BOOL hasFansCreateInfo;
@property (nonatomic) BOOL disableMemberInvite;
@property (copy, nonatomic) NSString *inviteDisableToast;
@property (nonatomic) long long createAppId;
@property (nonatomic) long long channelState;
@property (retain, nonatomic) RtcExtInfo *rtcExtInfo;
@property (nonatomic) BOOL hasRtcExtInfo;

+ (id)descriptor;

- (BOOL)mergeWith:(id)a0;

@end
