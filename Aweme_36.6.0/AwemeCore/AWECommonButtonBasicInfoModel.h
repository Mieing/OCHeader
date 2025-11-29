@class NSString, NSArray, AWEButtonTriggerStrategyModel;

@interface AWECommonButtonBasicInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btnName;
@property (copy, nonatomic) NSString *btnType;
@property (copy, nonatomic) NSArray *exemptions;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSArray *btnDatas;
@property (copy, nonatomic) NSString *tracerInfo;
@property (retain, nonatomic) AWEButtonTriggerStrategyModel *triggerStrategy;
@property (nonatomic) long long btnUIStyle;
@property (copy, nonatomic) NSString *freqExperimentKey;
@property (copy, nonatomic) NSString *exitExperimentKey;
@property (copy, nonatomic) NSString *btnGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)btnDatasJSONTransformer;
+ (id)triggerStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
