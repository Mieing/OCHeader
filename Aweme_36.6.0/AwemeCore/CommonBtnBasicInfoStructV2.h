@class BtnTriggerStrategyV2, NSString, GPBInt32Array, NSMutableArray;

@interface CommonBtnBasicInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *btnName;
@property (nonatomic) BOOL hasBtnName;
@property (retain, nonatomic) GPBInt32Array *exemptionsArray;
@property (readonly, nonatomic) unsigned long long exemptionsArray_Count;
@property (copy, nonatomic) NSString *btnType;
@property (nonatomic) BOOL hasBtnType;
@property (nonatomic) int btnUiStyle;
@property (nonatomic) BOOL hasBtnUiStyle;
@property (retain, nonatomic) NSMutableArray *buttonsArray;
@property (readonly, nonatomic) unsigned long long buttonsArray_Count;
@property (retain, nonatomic) NSMutableArray *btnDatasArray;
@property (readonly, nonatomic) unsigned long long btnDatasArray_Count;
@property (copy, nonatomic) NSString *tracerInfo;
@property (nonatomic) BOOL hasTracerInfo;
@property (retain, nonatomic) BtnTriggerStrategyV2 *triggerStrategy;
@property (nonatomic) BOOL hasTriggerStrategy;
@property (copy, nonatomic) NSString *freqExperimentKey;
@property (nonatomic) BOOL hasFreqExperimentKey;
@property (copy, nonatomic) NSString *exitExperimentKey;
@property (nonatomic) BOOL hasExitExperimentKey;
@property (copy, nonatomic) NSString *btnGroup;
@property (nonatomic) BOOL hasBtnGroup;

+ (id)descriptor;

@end
