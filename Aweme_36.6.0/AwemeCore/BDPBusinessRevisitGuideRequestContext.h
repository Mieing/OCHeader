@interface BDPBusinessRevisitGuideRequestContext : BDPBasePluginModel

@property (nonatomic) double lastTimestamp_revisitCondition1;
@property (nonatomic) double lastTimestamp_realCondition2;
@property (nonatomic) BOOL isDisabled;

- (BOOL)isLatest_revisitCondition1_onContext:(id)a0;
- (BOOL)isLatest_realCondition2_onContext:(id)a0;
- (void)reset;

@end
