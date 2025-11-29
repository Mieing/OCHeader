@class FinderLiveExtFlag, WCFinderPostLiveLikeCGI, FinderLiveAbnormalClosedPageInfo, WCFinderGetLiveMsgCGI, FinderLiveErrorPage, FinderBizUserInfo, NSData, MMFinderLiveTaskId, FinderLiveSyncAnchorCloseLiveGuideInfoResp, NSString, FinderLiveAppMsgPlatformReminderNotificationJumpInfo_FinderLiveFunctionMenuWordingInfo, FinderLiveContact;

@interface MMFinderLiveContext : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveContact *selfContact;
@property (retain, nonatomic) FinderLiveContact *anchorContact;
@property (nonatomic) unsigned int liveExtFlag;
@property (retain, nonatomic) FinderLiveExtFlag *liveExtFlagExt;
@property (nonatomic) unsigned long long liveMicExtFlag;
@property (nonatomic) unsigned long long extShowFlag;
@property (nonatomic) unsigned long long backendAnchorStatusFlag;
@property (nonatomic) unsigned long long askProductQuestionExtFlag;
@property (retain, nonatomic) WCFinderGetLiveMsgCGI *lastGetLiveMsgCGI;
@property (weak, nonatomic) WCFinderPostLiveLikeCGI *lastPostLiveLikeCGI;
@property (retain, nonatomic) FinderLiveErrorPage *liveErrorPage;
@property (retain, nonatomic) FinderLiveAbnormalClosedPageInfo *audienceAbnormalClosedPageInfo;
@property (nonatomic) BOOL showNewStyleHeatValueStyle;
@property (nonatomic) unsigned int liveFlag;
@property (retain, nonatomic) FinderBizUserInfo *bindedBizUserInfo;
@property (retain, nonatomic) FinderBizUserInfo *displayedBizUserInfo;
@property (nonatomic) unsigned int bizFriendFollowCount;
@property (retain, nonatomic) NSData *recommendUserSendGiftInfoCtx;
@property (retain, nonatomic) NSData *packageGiftRecommendInfoCtx;
@property (nonatomic) unsigned int initialRemainTime;
@property (retain, nonatomic) FinderLiveSyncAnchorCloseLiveGuideInfoResp *anchorCloseLiveGuideInfo;
@property (nonatomic) BOOL enableRewardQuota;
@property (nonatomic) unsigned long long currentRewardQuota;
@property (nonatomic) unsigned long long currentWecoinBalance;
@property (nonatomic) double consumeQuotaBalance;
@property (nonatomic) double historyConsumeQuotaBalance;
@property (retain, nonatomic) NSString *consumeQuotaVerifyUrl;
@property (nonatomic) BOOL currentWecoinBalanceUpdated;
@property (nonatomic) unsigned long long lastFlowSignHistoryRewardQuota;
@property (nonatomic) BOOL hasShowGiftMultipleSendTips;
@property (readonly, nonatomic) BOOL enableShowGiftMultipleSendTips;
@property (nonatomic) BOOL enableDisplayFollowBtn;
@property (nonatomic) long long purchaseLivePreviewType;
@property (nonatomic) unsigned int purchaseLivePreviewDuration;
@property (readonly, nonatomic) BOOL designatedGiftPkEnabled;
@property (retain, nonatomic) NSString *anchorTaskGuideId;
@property (nonatomic) unsigned int anchorTaskGuideType;
@property (retain, nonatomic) FinderLiveAppMsgPlatformReminderNotificationJumpInfo_FinderLiveFunctionMenuWordingInfo *notificationJumpMenuInfo;

- (BOOL)enableLiveRoomReward;
- (BOOL)enableAudienceReward;
- (BOOL)enableAudienceMic;
- (BOOL)isRecentlyMic;
- (BOOL)enableDisplayNewHeatValue;
- (BOOL)enableGetLiveMsgDisplayNewHeatValue;
- (id)description;
- (BOOL)isBizLive;
- (id)bizLiveNickname;
- (id)bizLiveUsername;
- (id)bizLiveUsernameWithBrandPrefix;
- (BOOL)isShowGloryListSwitchOpen;
- (BOOL)isAudienceMicRankSwitchOpen;
- (BOOL)isAudienceExposedGiftEnabled;
- (void).cxx_destruct;

@end
