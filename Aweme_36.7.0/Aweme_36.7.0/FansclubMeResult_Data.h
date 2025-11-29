@class FansclubMeResult_ClubCheckInTask, FansclubMeResult_AnchorClubTaskSwitch, HTSLiveBonusInfo, FansclubMeResult_ParticipatePrice, FansclubMeResult_AutoLightOptimization, HTSLiveFansclubParticipateIncentive, HTSLiveUser, NSMutableArray, FansclubMeResult_LiveEcomTaskConfig, HTSLiveUserFansclubInfo, NSString, HTSLiveBanner, HTSLiveClubInfo, GetFansclubHomepageResult_Data_GroupLiveInfo, FansclubMeResult_PopularityRank, HTSLiveGuardInfo, HTSLiveBonusBanner, FansclubMeResult_TaskInfo, FansclubMeResult_MarketingPageInfo;

@interface FansclubMeResult_Data : IESLivePBBaseMessage

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) HTSLiveGuardInfo *guardInfo;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_GroupLiveInfo *groupLiveInfo;
@property (nonatomic) BOOL isSpecificGroupLive;
@property (retain, nonatomic) HTSLiveClubInfo *clubInfo;
@property (nonatomic) BOOL hasClubInfo;
@property (retain, nonatomic) HTSLiveUserFansclubInfo *userFansclubInfo;
@property (nonatomic) BOOL hasUserFansclubInfo;
@property (retain, nonatomic) FansclubMeResult_ParticipatePrice *participatePrice;
@property (nonatomic) BOOL hasParticipatePrice;
@property (nonatomic) long long autoLightUpPrice;
@property (nonatomic) BOOL autoLightUpSwitch;
@property (nonatomic) BOOL hotRankSwitch;
@property (copy, nonatomic) NSString *fansclubSchema;
@property (retain, nonatomic) HTSLiveUser *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) BOOL quitFansclubSwitch;
@property (retain, nonatomic) NSMutableArray *activityEntrancesArray;
@property (readonly, nonatomic) unsigned long long activityEntrancesArray_Count;
@property (nonatomic) long long specialGiftId;
@property (retain, nonatomic) FansclubMeResult_PopularityRank *popularityRank;
@property (nonatomic) BOOL hasPopularityRank;
@property (retain, nonatomic) HTSLiveBanner *banner;
@property (nonatomic) BOOL hasBanner;
@property (retain, nonatomic) FansclubMeResult_AutoLightOptimization *autoLightOptimization;
@property (nonatomic) BOOL hasAutoLightOptimization;
@property (nonatomic) int scene;
@property (retain, nonatomic) FansclubMeResult_LiveEcomTaskConfig *liveEcomTaskConfig;
@property (nonatomic) BOOL hasLiveEcomTaskConfig;
@property (retain, nonatomic) FansclubMeResult_AnchorClubTaskSwitch *clubTaskSwitch;
@property (nonatomic) BOOL hasClubTaskSwitch;
@property (retain, nonatomic) NSMutableArray *bannersArray;
@property (readonly, nonatomic) unsigned long long bannersArray_Count;
@property (nonatomic) long long popularityRankHour;
@property (retain, nonatomic) HTSLiveFansclubParticipateIncentive *participateIncentive;
@property (nonatomic) BOOL hasParticipateIncentive;
@property (nonatomic) long long abType;
@property (nonatomic) long long roomType;
@property (copy, nonatomic) NSString *taskDesc;
@property (nonatomic) long long jumpGiftId;
@property (retain, nonatomic) FansclubMeResult_TaskInfo *taskInfo;
@property (nonatomic) BOOL hasTaskInfo;
@property (retain, nonatomic) HTSLiveBonusInfo *bonusInfo;
@property (nonatomic) BOOL hasBonusInfo;
@property (retain, nonatomic) HTSLiveBonusBanner *bonusBanner;
@property (nonatomic) BOOL hasBonusBanner;
@property (retain, nonatomic) FansclubMeResult_MarketingPageInfo *marketingPageInfo;
@property (nonatomic) BOOL hasMarketingPageInfo;
@property (nonatomic) BOOL isNewPopularityRank;
@property (retain, nonatomic) FansclubMeResult_ClubCheckInTask *clubCheckInTask;
@property (nonatomic) BOOL hasClubCheckInTask;

+ (id)descriptor;

@end
