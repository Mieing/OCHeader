@class NSDictionary, AWELuckyCatReadTaskSocialInfo, AWELiteEnhancePendant, NSString, AWELuckyCatGlobalWidgetConfig, AWEIncentiveEntranceLoginPageConfig, AWELuckyCatCoinAwardExit, AWELiteSwipeTaskModel, NSArray, AWELiteVibratorInfo, AWELuckyCatTabBarGuideInfo, AWELiteBagGuideTimeModel, AWELuckyCatFeedTaskCardFirstRequestInfo, AWELuckyCatPendant, AWELiteShareFeedFissionTaskInfo, AWEluckyCatBusinessConfig, AWELiteRedPacketLoginOptimizeTaskModel, AWELiteUnLoginReadTaskModel, AWELuckyCatLottieResource, AWELuckyCatNewExperienceModel, AWELuckyCatRewardInfoModel, AWELuckyCatAdCollectTaskModel, NSNumber;

@interface AWELuckyCatReadTaskModel : MTLModel <MTLJSONSerializing, AWELitePendantModelProtocol>

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *pendantEntranceSchema;
@property (nonatomic) BOOL taskCompleted;
@property (nonatomic) unsigned long long taskDuration;
@property (nonatomic) BOOL canHide;
@property (nonatomic) long long hiddenStatus;
@property (nonatomic) BOOL isSetGray;
@property (retain, nonatomic) NSNumber *longVideoLimitTime;
@property (retain, nonatomic) AWELuckyCatGlobalWidgetConfig *widgetConfig;
@property (retain, nonatomic) AWELuckyCatRewardInfoModel *rewardInfoModel;
@property (retain, nonatomic) AWEluckyCatBusinessConfig *coinEntranceConfig;
@property (copy, nonatomic) NSString *inviteCodeSchema;
@property (retain, nonatomic) AWELuckyCatCoinAwardExit *awardExitModel;
@property (retain, nonatomic) AWELuckyCatNewExperienceModel *experienceInfo;
@property (retain, nonatomic) AWELuckyCatFeedTaskCardFirstRequestInfo *feedCardFirstInfo;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELuckyCatAdCollectTaskModel *adCollectTaskInfo;
@property (retain, nonatomic) AWELuckyCatReadTaskSocialInfo *socialInfo;
@property (retain, nonatomic) AWELuckyCatTabBarGuideInfo *tabBarGuideInfo;
@property (nonatomic) long long tabBarGuideInfoExitTotalShowedTimes;
@property (nonatomic) long long tabBarGuideInfoExitDays;
@property (retain, nonatomic) AWELiteShareFeedFissionTaskInfo *feedFissionConfig;
@property (retain, nonatomic) AWELiteVibratorInfo *vibratorInfo;
@property (retain, nonatomic) AWELiteBagGuideTimeModel *luckyBagGuideTime;
@property (retain, nonatomic) AWELiteSwipeTaskModel *swipeTask;
@property (copy, nonatomic) NSString *clientLocalCache;
@property (copy, nonatomic) NSArray *preloadConfigArray;
@property (retain, nonatomic) AWELiteRedPacketLoginOptimizeTaskModel *loginOptimizeTaskModel;
@property (copy, nonatomic) NSString *liveBlockInfo;
@property (retain, nonatomic) AWELiteEnhancePendant *enhance;
@property (retain, nonatomic) AWELuckyCatPendant *userEduPendantExtend;
@property (nonatomic) BOOL hasNextUserEduPendantExtend;
@property (nonatomic) BOOL canShowPlayletTask;
@property (copy, nonatomic) NSDictionary *clientParamsConfig;
@property (retain, nonatomic) AWEIncentiveEntranceLoginPageConfig *incentiveEntranceLoginPageConfig;
@property (retain, nonatomic) AWELiteUnLoginReadTaskModel *unLoginReadTaskModel;
@property (retain, nonatomic) AWELuckyCatLottieResource *coinsFlyInLottieResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetConfigJSONTransformer;
+ (id)incentiveEntranceLoginPageConfigJSONTransformer;
+ (id)loginOptimizeTaskModelJSONTransformer;
+ (id)awardExitModelJSONTransformer;
+ (id)preloadConfigArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
