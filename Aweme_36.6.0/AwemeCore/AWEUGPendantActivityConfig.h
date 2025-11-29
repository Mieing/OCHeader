@class NSString, NSArray, AWEUGCountDownConfigModel, NSDictionary, AWEUGTaskProgressCoefficientConfigModel, AWEUGFCoinDeleteConfig, AWEUGPendantActivityConfigSideBarCaption, AWEUGPendantActionPathModel;

@interface AWEUGPendantActivityConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long countOfDisappearAfter;
@property (nonatomic) unsigned long long closeType;
@property (nonatomic) long long disappearAfterCodeLaunch;
@property (nonatomic) long long closeHoursNotShow;
@property (nonatomic) long long maxCloseCountTotal;
@property (nonatomic) long long maxCloseCountaDay;
@property (nonatomic) long long daysWindows;
@property (nonatomic) long long closeMaxTimesInDays;
@property (nonatomic) long long daysWillNotPresent;
@property (nonatomic) BOOL canShowInFollowing;
@property (nonatomic) BOOL enableInTeenagerMode;
@property (copy, nonatomic) NSArray *retryOccasionArray;
@property (nonatomic) long long retryScrollCount;
@property (nonatomic) BOOL exitFold;
@property (retain, nonatomic) AWEUGFCoinDeleteConfig *deleteConfig;
@property (nonatomic) long long clickLimitDaysNotShow;
@property (nonatomic) long long clickLimitDaysNoClick;
@property (copy, nonatomic) NSArray *exemptPeriod;
@property (nonatomic) BOOL ignoreAuditingVersion;
@property (copy, nonatomic) NSDictionary *notLoginConfig;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (copy, nonatomic) NSString *clientBubbleStr;
@property (retain, nonatomic) AWEUGTaskProgressCoefficientConfigModel *taskProgressCoefficientConfig;
@property (retain, nonatomic) AWEUGPendantActionPathModel *actionPath;
@property (copy, nonatomic) NSArray *frequentLimitStrategyArray;
@property (nonatomic) BOOL frequentLimitByMaterial;
@property (retain, nonatomic) AWEUGPendantActivityConfigSideBarCaption *sideBarCaption;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exemptPeriodJSONTransformer;
+ (id)frequentLimitStrategyArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
