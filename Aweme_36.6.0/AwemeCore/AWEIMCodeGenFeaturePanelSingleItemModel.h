@class AWEIMCodeGenFeaturePanelBadgeModel, NSString, NSArray, AWEIMCodeGenFeaturePanelFeatureSettingsModel, AWEIMCodeGenFeaturePanelIconRingModel, AWEIMCodeGenFeaturePanelFeatureDynamicModel;

@interface AWEIMCodeGenFeaturePanelSingleItemModel : AWEBaseDataModel

@property (nonatomic) int operation;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleParamsModelArray;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *descriptionParamsModelArray;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *titleTextColorLight;
@property (copy, nonatomic) NSString *titleTextColorDark;
@property (copy, nonatomic) NSString *subtitleTextColorLight;
@property (copy, nonatomic) NSString *subtitleTextColorDark;
@property (copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (nonatomic) float priority;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelIconRingModel *iconRingModel;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelFeatureSettingsModel *featureModel;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelFeatureDynamicModel *dynamicModel;
@property (copy, nonatomic) NSArray *exitSettingsModelArray;
@property (retain, nonatomic) AWEIMCodeGenFeaturePanelBadgeModel *badgeModel;
@property (copy, nonatomic) NSString *iconDark;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
