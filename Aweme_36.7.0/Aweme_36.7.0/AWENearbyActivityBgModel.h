@class NSString, AWENearbyGrouponCommonFrequencyData, AWEURLModel;

@interface AWENearbyActivityBgModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *dark;
@property (retain, nonatomic) AWEURLModel *light;
@property (copy, nonatomic) NSString *trackParam;
@property (copy, nonatomic) NSString *bgTextColor;
@property (copy, nonatomic) NSString *bgTextColorLight;
@property (nonatomic) unsigned long long bgType;
@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (nonatomic) unsigned long long atmosphereIntensity;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
