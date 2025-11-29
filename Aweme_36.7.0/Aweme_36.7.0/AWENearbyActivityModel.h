@class NSString, AWENearbyGrouponCommonFrequencyData, AWEURLModel;

@interface AWENearbyActivityModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *activityBgImgURL;
@property (retain, nonatomic) AWEURLModel *activityBgImgLightURL;
@property (copy, nonatomic) NSString *bgTextColor;
@property (copy, nonatomic) NSString *bgTextColorLight;
@property (nonatomic) long long displayTransformerTheme;
@property (copy, nonatomic) NSString *trackParams;
@property (nonatomic) unsigned long long atmosphereIntensity;
@property (nonatomic) unsigned long long bgType;
@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (nonatomic) BOOL isDefaultStyle;

- (void).cxx_destruct;

@end
