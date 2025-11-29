@class AWEAntiAddictWeekFreqLimitModel, NSString, NSArray, AWEAntiAddictStrategyNightToastModel, AWEAntiAddictStrategyOnTimeVideoModel, AWEAntiAddictToastFreqLimitModel, NSDictionary, AWEAntiAddictStrategyDynamicToastModel, NSSet, AWEAntiAddictDayNightThresholdMap, NSNumber, AWEAntiAddictNoticeThresholdModel;

@interface AWEAntiAddictStrategyInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *thresholdToast;
@property (retain, nonatomic) AWEAntiAddictStrategyNightToastModel *nightToast;
@property (retain, nonatomic) AWEAntiAddictStrategyOnTimeVideoModel *onTimeVideo;
@property (retain, nonatomic) AWEAntiAddictStrategyDynamicToastModel *dynamicToast;
@property (copy, nonatomic) NSArray *systemRestMask;
@property (copy, nonatomic) NSArray *systemBlockMask;
@property (copy, nonatomic) NSArray *dailyAlert;
@property (copy, nonatomic) NSDictionary *frequencyControlInfo;
@property (retain, nonatomic) AWEAntiAddictNoticeThresholdModel *thresholdConf;
@property (copy, nonatomic) NSArray *priorityConf;
@property (retain, nonatomic) AWEAntiAddictDayNightThresholdMap *dayNightThreshold;
@property (retain, nonatomic) AWEAntiAddictWeekFreqLimitModel *weekFreqLimit;
@property (retain, nonatomic) AWEAntiAddictToastFreqLimitModel *toastFreqLimit;
@property (copy, nonatomic) NSNumber *pSystemRemindMaxTime;
@property (copy, nonatomic) NSSet *timeRangeSet;
@property (readonly, nonatomic) long long sleepTimeDuration;
@property (readonly, nonatomic) long long defaultDelayRemindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkValidWithTimeRange:(long long)a0;
+ (BOOL)checkValidWithBeginTime:(long long)a0 endTime:(long long)a1;
+ (id)thresholdToastJSONTransformer;
+ (id)nightToastJSONTransformer;
+ (id)onTimeVideoJSONTransformer;
+ (id)dynamicToastJSONTransformer;
+ (id)systemRestMaskJSONTransformer;
+ (id)systemBlockMaskJSONTransformer;
+ (id)dailyAlertJSONTransformer;
+ (id)thresholdConfJSONTransformer;
+ (id)dayNightThresholdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)systemRemindMaxTime;
- (id)frequencyControlOfStrategy:(id)a0;
- (void)recalculateTimeRangeSetWithArray:(id)a0;
- (id)defaultPriorityConf;
- (void)deserializeListIfNeeded;
- (id)initWithThresholdToast:(id)a0 nightToast:(id)a1 dynamicToast:(id)a2 systemRestMask:(id)a3 systemBlockMask:(id)a4 dailyAlert:(id)a5 thresholdConf:(id)a6 dayNightThreshold:(id)a7;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
