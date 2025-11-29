@class NSString, RTVVoipFeatures;

@interface RTVVoipSettingsFeature : JSONModel

@property (retain, nonatomic) RTVVoipFeatures *features;
@property (copy, nonatomic) NSString *disableToastText;

+ (id)keyMapper;

- (void)setFeaturesWithNSString:(id)a0;
- (void).cxx_destruct;

@end
