@class NSDictionary, NSString;

@interface BDPVideoStrategyModel : BDPBasePluginModel

@property (copy, nonatomic) NSDictionary *autoBitrateExtra;
@property (nonatomic) BOOL useAdaptiveBitrate;
@property (nonatomic) BOOL useDowngradeSuperResolution;
@property (copy, nonatomic) NSString *downgradeDefinition;

- (void).cxx_destruct;

@end
