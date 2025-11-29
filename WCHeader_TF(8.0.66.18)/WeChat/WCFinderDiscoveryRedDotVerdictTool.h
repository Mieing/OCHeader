@class NSMutableDictionary, WCFinderHasRedDotArrayOutputPredictor;

@interface WCFinderDiscoveryRedDotVerdictTool : NSObject

@property (retain, nonatomic) NSMutableDictionary *noneRedDotPredictors;
@property (retain, nonatomic) NSMutableDictionary *hasRedDotPredictors;
@property (retain, nonatomic) WCFinderHasRedDotArrayOutputPredictor *combinationPredictor;
@property (retain, nonatomic) WCFinderHasRedDotArrayOutputPredictor *fourSingleBusinessPredictor;

+ (void)reportModelCleanDetailPath:(id)a0 strategy:(unsigned long long)a1 predictProbability:(double)a2 thresholdProbability:(double)a3;

- (id)init;
- (void)initPredictors;
- (id)getNoneRedDotPredictorForPath:(id)a0;
- (id)getHasRedDotPredictorForPath:(id)a0;
- (BOOL)verdictWillBeEnable;
- (BOOL)toolIsWork;
- (BOOL)toolIsReadyForDispose;
- (BOOL)toolIsReadyForSimul;
- (void)triggerAllRedDotShowAction;
- (void)triggerFindPageReportAction:(id)a0;
- (void)checkShouldDisposeTargetRedDotPath:(id)a0;
- (BOOL)triggerHighProbabilityRedDotPath:(id)a0;
- (BOOL)triggerLowProbabilityRedDotPath:(id)a0;
- (id)getWinBusinessCombinationFrom:(id)a0;
- (id)getPredictOutputReport;
- (id)convertRedDotPathToBusinessKey:(id)a0;
- (void)clear;
- (void).cxx_destruct;

@end
