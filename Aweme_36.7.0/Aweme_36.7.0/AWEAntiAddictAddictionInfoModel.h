@class NSArray, AWETimeManagementBubbleModel, AWEElderModePopupModel, AWETimingCloseAlertConfigModel, AWEAntiAddictUIConfigModel, AWEAntiAddictRemindVideoInfoModel, AWEAntiAddictTimeManageInfoModel, AWEAntiAddictNormalMaskModel, AWEAntiAddictStrategyInfoModel;

@interface AWEAntiAddictAddictionInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAntiAddictRemindVideoInfoModel *restVideoInfo;
@property (retain, nonatomic) AWEAntiAddictRemindVideoInfoModel *sleepVideoInfo;
@property (retain, nonatomic) AWEAntiAddictTimeManageInfoModel *timeManageInfo;
@property (retain, nonatomic) NSArray *activityInfoList;
@property (nonatomic) long long showSmartRemind;
@property (retain) AWEAntiAddictStrategyInfoModel *strategyInfo;
@property (retain, nonatomic) AWEAntiAddictNormalMaskModel *normalMask;
@property (retain, nonatomic) AWEElderModePopupModel *adaptElderlyPopup;
@property (retain, nonatomic) AWEAntiAddictUIConfigModel *addictionUIConfig;
@property (retain, nonatomic) AWETimeManagementBubbleModel *timeManagementBubbleConfig;
@property (retain, nonatomic) AWETimingCloseAlertConfigModel *timingCloseAlertConfig;
@property (readonly, copy, nonatomic) NSArray *systemBlockMaskControl;

+ (id)restVideoInfoJSONTransformer;
+ (id)sleepVideoInfoJSONTransformer;
+ (id)timeManageInfoJSONTransformer;
+ (id)activityInfoListJSONTransformer;
+ (id)strategyInfoJSONTransformer;
+ (id)normalMaskJSONTransformer;
+ (id)adaptElderlyPopupJSONTransformer;
+ (id)addictionUIConfigJSONTransformer;
+ (id)timeManagementBubbleConfigJSONTransformer;
+ (id)timingCloseAlertConfigJSONTransformer;
+ (id)systemBlockMaskControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)private_setRestVideoInfo:(id)a0;
- (void)private_setSleepVideoInfo:(id)a0;
- (id)initWithTimeManagerInfo:(id)a0 strategyInfo:(id)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
