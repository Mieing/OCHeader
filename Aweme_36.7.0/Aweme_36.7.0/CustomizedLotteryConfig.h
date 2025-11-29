@class GPBInt64ObjectDictionary, NSString, GPBInt64Array, NSMutableArray, CustomizableOption;

@interface CustomizedLotteryConfig : IESLivePBBaseMessage

@property (nonatomic) int lotteryType;
@property (retain, nonatomic) CustomizableOption *countDowns;
@property (nonatomic) BOOL hasCountDowns;
@property (retain, nonatomic) CustomizableOption *userNums;
@property (nonatomic) BOOL hasUserNums;
@property (retain, nonatomic) CustomizableOption *awardCounts;
@property (nonatomic) BOOL hasAwardCounts;
@property (retain, nonatomic) GPBInt64Array *userConditionTypesArray;
@property (readonly, nonatomic) unsigned long long userConditionTypesArray_Count;
@property (retain, nonatomic) GPBInt64Array *lotteryConditionTypesArray;
@property (readonly, nonatomic) unsigned long long lotteryConditionTypesArray_Count;
@property (retain, nonatomic) NSMutableArray *customizedConditionTypesArray;
@property (readonly, nonatomic) unsigned long long customizedConditionTypesArray_Count;
@property (retain, nonatomic) CustomizableOption *fansLevelConfigList;
@property (nonatomic) BOOL hasFansLevelConfigList;
@property (nonatomic) int dailyCountLimit;
@property (nonatomic) int todayUsedCount;
@property (copy, nonatomic) NSString *serverBizData;
@property (copy, nonatomic) NSString *uiConfig;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardServerBizData;
@property (readonly, nonatomic) unsigned long long extraAwardServerBizData_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardUiConfig;
@property (readonly, nonatomic) unsigned long long extraAwardUiConfig_Count;

+ (id)descriptor;

@end
