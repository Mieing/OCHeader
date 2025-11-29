@class NSString, AWESearchResultMultiColumnFrequencyConfig, AWESearchResultMultiColumnSwitchTimesConfig, AWESearchResultMultiColumnIconModel;

@interface AWESearchResultMultiColumnToastConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) AWESearchResultMultiColumnIconModel *leftIcon;
@property (retain, nonatomic) AWESearchResultMultiColumnIconModel *rightIcon;
@property (retain, nonatomic) AWESearchResultMultiColumnSwitchTimesConfig *dualToSingleConfig;
@property (retain, nonatomic) AWESearchResultMultiColumnSwitchTimesConfig *singleToDualConfig;
@property (retain, nonatomic) AWESearchResultMultiColumnFrequencyConfig *frequencyControl;

+ (id)leftIconJSONTransformer;
+ (id)rightIconJSONTransformer;
+ (id)frequencyControlJSONTransformer;
+ (id)dualToSingleConfigJSONTransformer;
+ (id)singleToDualConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
