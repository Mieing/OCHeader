@class BXStrategySettingsOC;

@interface BXStrategyBuilderOC : NSObject

@property (copy, nonatomic) BXStrategySettingsOC *strategySettings;

- (id)buildUpdataInterval:(int)a0;
- (id)buildOpenRealTimeDecision:(BOOL)a0;
- (id)buildTryCount:(int)a0;
- (id)buildAccessKey:(id)a0;
- (id)buildSecretKey:(id)a0;
- (id)buildByteBenchId:(int)a0;
- (id)buildClientInfoDic:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
