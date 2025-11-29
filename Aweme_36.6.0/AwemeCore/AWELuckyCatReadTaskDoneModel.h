@class AWELuckyCatFeedToastInfo, AWELuckyCatGlobalWidgetConfig, AWELuckyCatPropBoxInfoModel, AWELuckyCatPendantExtendedInfoModel, AWELuckyCatBubbleInfo, AWELiteVibratorInfo, AWELuckyCatRewardInfoModel, AWELuckyCatToastInfo, AWELuckyCatExperienceTaskInfo, AWELuckyCatFeedPushInfo, AWELuckyCatPendant, AWELuckyCatCallBackInfo, AWELuckyCatTreasureInfo, AWELuckyCatCoinAwardExit, NSString, AWELiteUnLoginReadTaskModel, AWELuckyCatNewBiePopupsInfo, AWELuckyCatAdCollectTaskModel, AWELiteEnhancePendant;

@interface AWELuckyCatReadTaskDoneModel : MTLModel <MTLJSONSerializing, AWELitePendantModelProtocol>

@property (nonatomic) unsigned long long score;
@property (nonatomic) BOOL taskCompleted;
@property (nonatomic) unsigned long long taskDuration;
@property (retain, nonatomic) AWELuckyCatTreasureInfo *treasureInfo;
@property (retain, nonatomic) AWELuckyCatToastInfo *toastInfo;
@property (retain, nonatomic) AWELuckyCatBubbleInfo *bubbleInfo;
@property (retain, nonatomic) AWELuckyCatNewBiePopupsInfo *popupsInfo;
@property (retain, nonatomic) AWELuckyCatFeedToastInfo *feedToastInfo;
@property (retain, nonatomic) AWELuckyCatFeedPushInfo *feedPushInfo;
@property (retain, nonatomic) AWELuckyCatCallBackInfo *callBackInfo;
@property (nonatomic) long long hiddenStatus;
@property (retain, nonatomic) AWELuckyCatRewardInfoModel *rewardInfoModel;
@property (retain, nonatomic) AWELuckyCatGlobalWidgetConfig *widgetConfig;
@property (nonatomic) unsigned long long cashAmount;
@property (retain, nonatomic) AWELuckyCatPendantExtendedInfoModel *pendantExtendedInfo;
@property (retain, nonatomic) AWELuckyCatPropBoxInfoModel *propBoxInfo;
@property (nonatomic) unsigned long long experience;
@property (nonatomic) unsigned long long awardType;
@property (retain, nonatomic) AWELuckyCatExperienceTaskInfo *experienceTaskInfo;
@property (retain, nonatomic) AWELuckyCatAdCollectTaskModel *adCollectTaskInfo;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELiteVibratorInfo *vibratorInfo;
@property (retain, nonatomic) AWELuckyCatCoinAwardExit *awardExitModel;
@property (copy, nonatomic) NSString *clientLocalCache;
@property (copy, nonatomic) NSString *playletToken;
@property (nonatomic) BOOL isPlayletBlackBoxNode;
@property (retain, nonatomic) AWELiteEnhancePendant *enhance;
@property (nonatomic) BOOL canShowPlayletTask;
@property (retain, nonatomic) AWELiteUnLoginReadTaskModel *unLoginReadTaskModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)treasureInfoJSONTransformer;
+ (id)toastInfoJSONTransformer;
+ (id)popupsInfoJSONTransformer;
+ (id)feedToastInfoJSONTransformer;
+ (id)feedPushInfoJSONTransformer;
+ (id)callBackInfoJSONTransformer;
+ (id)experienceTaskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
