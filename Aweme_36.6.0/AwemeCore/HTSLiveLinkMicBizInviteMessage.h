@class BizOpenGameInfo, NSString, HTSLiveCommon, IESLiveLinkMicBizExtra, NSMutableArray, IESLiveListUser;

@interface HTSLiveLinkMicBizInviteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int bizType;
@property (nonatomic) int inviteType;
@property (nonatomic) long long inviteUid;
@property (copy, nonatomic) NSString *inviteName;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) IESLiveListUser *inviteUser;
@property (nonatomic) BOOL hasInviteUser;
@property (copy, nonatomic) NSString *inviteTitle;
@property (copy, nonatomic) NSString *inviteSubTitle;
@property (nonatomic) long long waitSec;
@property (retain, nonatomic) BizOpenGameInfo *bizGameInfo;
@property (nonatomic) BOOL hasBizGameInfo;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *linkMicBizExtra;
@property (nonatomic) BOOL hasLinkMicBizExtra;
@property (copy, nonatomic) NSString *inviteOpenUid;

+ (id)descriptor;

@end
