@class NSString, NSArray, AWEAntiAddictAddictionInfoModel, AWEAntiAddictSelectedInfoModel, AWEElderModePopupModel, AWETimeManagementBubbleModel, AWEAntiAddictUIConfigModel, AWETimingCloseAlertConfigModel, AWEAntiAddictRemindVideoInfoModel, AWEAntiAddictStrategyInfoModel, AWEAntiAddictNormalMaskModel;

@interface AWEAntiAddictNoticeSettingManager : NSObject

@property (retain) AWEAntiAddictAddictionInfoModel *antiAddictionInfo;
@property (copy) NSArray *officialMaskIdList;
@property (copy) NSString *modelAssociateUserID;
@property (readonly, nonatomic) AWEAntiAddictRemindVideoInfoModel *currentRestVideoInfo;
@property (readonly, nonatomic) AWEAntiAddictRemindVideoInfoModel *currentSleepVideoInfo;
@property (readonly, nonatomic) AWEAntiAddictSelectedInfoModel *lastRestSelectedModel;
@property (readonly, nonatomic) AWEAntiAddictSelectedInfoModel *lastSleepSelectedModel;
@property long long remindToRest;
@property long long remindToSleep;
@property long long addictRemindState;
@property long long delayRemindTime;
@property (readonly, copy, nonatomic) NSArray *activityInfoModelList;
@property (readonly, nonatomic) AWEAntiAddictStrategyInfoModel *strategyInfo;
@property (readonly, nonatomic) AWEAntiAddictNormalMaskModel *normalMask;
@property (readonly, nonatomic) AWEElderModePopupModel *adaptElderlyPopup;
@property (readonly, nonatomic) AWEAntiAddictUIConfigModel *addictionUIConfig;
@property (readonly, nonatomic) AWETimeManagementBubbleModel *timeManagementBubbleConfig;
@property (readonly, nonatomic) AWETimingCloseAlertConfigModel *timingCloseAlertConfig;

+ (id)sharedManager;

- (long long)priorityOfStrategy:(id)a0;
- (void)reloadAntiAddictionInfo;
- (id)storageKeyWithCurrentUid;
- (void)setAntiAddictCurrentVideoInfoModel:(id)a0 remindType:(unsigned long long)a1;
- (void)setupAntiAddictionInfo:(id)a0;
- (id)antiAddictAddictionInfoKey;
- (void)refreshOfficialMaskIDList;
- (void)checkDiffWithOriginModel:(id)a0 newModel:(id)a1;
- (void)saveAntiAddictionInfoModel;
- (id)antiAddictLastRestSelectedInfoKey;
- (id)antiAddictLastSleepSelectedInfoKey;
- (void)updateModelAssociateUserID;
- (void)trackSystemBlockConfigChangeWithOriginList:(id)a0 newList:(id)a1;
- (void)setAntiAddictCurrentVideoInfoModel:(id)a0 remindType:(unsigned long long)a1 needUpdateFeed:(BOOL)a2;
- (void)p_setAntiAddictCurrentVideoInfoModel:(id)a0 remindType:(unsigned long long)a1;
- (id)p_forceRemindBlockTimeListFrom:(id)a0;
- (long long)revisedRemindToSleep;
- (void)setAntiAddictLastSelectedInfoModel:(id)a0 remindType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setup;

@end
