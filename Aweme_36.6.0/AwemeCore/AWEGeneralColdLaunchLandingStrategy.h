@class NSString, AWEGeneralColdLaunchLandingConfigModel, AWEGeneralColdLaunchLandingFrequencyConfigModel, AWEGeneralColdLaunchLandingFrequencyModel;

@interface AWEGeneralColdLaunchLandingStrategy : NSObject <AWEHPLandingStrategyProtocol>

@property (retain, nonatomic) AWEGeneralColdLaunchLandingConfigModel *config;
@property (retain, nonatomic) AWEGeneralColdLaunchLandingFrequencyConfigModel *frequencyConfig;
@property (retain, nonatomic) AWEGeneralColdLaunchLandingFrequencyModel *frequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLandingContext:(id)a0;
- (BOOL)shouldStrategyEffect;
- (id)getLandingScheduledModel;
- (void)endLandingWithSuccess:(BOOL)a0;
- (BOOL)shouldAvoidCondition;
- (void)initFrequency;
- (id)landingFrequencyKey;
- (void)initConfigWithContext:(id)a0;
- (BOOL)checkFrequency;
- (void).cxx_destruct;
- (void)updateFrequency;

@end
