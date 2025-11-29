@class NSDictionary, AWEGrouponCommonFrequencyData;

@interface AWEGrouponTabRedDotModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGrouponCommonFrequencyData *frequencyData;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasRedDotShow;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
