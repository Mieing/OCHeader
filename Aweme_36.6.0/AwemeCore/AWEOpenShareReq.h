@class NSNumber, NSString, AWEOpenShareJumpCommonAbilityInfo, AWEOpenShareMusicCardInfo, NSMutableDictionary, AWEOpenShareGameInvitationInfo, AWEOpenShareIMShareMicroAppInfo, AWEOpenShareLinkInfo;

@interface AWEOpenShareReq : AWEOpenPlatformBaseReq

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *targetOpenId;
@property (copy, nonatomic) NSString *shareStartTimestamp;
@property (copy, nonatomic) NSString *launchTimeStamp;
@property (copy, nonatomic) NSNumber *appId;
@property (nonatomic) unsigned long long landedPageType;
@property (nonatomic) BOOL useNewShareAbility;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long addGroupType;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) unsigned long long shareAction;
@property (retain, nonatomic) AWEOpenShareLinkInfo *linkInfo;
@property (retain, nonatomic) AWEOpenShareIMShareMicroAppInfo *shareMicroAppInfo;
@property (retain, nonatomic) AWEOpenShareGameInvitationInfo *gameInvitationInfo;
@property (retain, nonatomic) AWEOpenShareMusicCardInfo *shareMusicCardInfo;
@property (retain, nonatomic) AWEOpenShareJumpCommonAbilityInfo *jumpCommonAbility;
@property (retain, nonatomic) NSMutableDictionary *extraInfoDict;

- (void).cxx_destruct;
- (double)launchDuration;
- (id)launchMethod;

@end
