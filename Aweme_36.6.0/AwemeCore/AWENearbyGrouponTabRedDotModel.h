@class AWENearbyGrouponCommonFrequencyData, NSDictionary;

@interface AWENearbyGrouponTabRedDotModel : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasRedDotShow;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
