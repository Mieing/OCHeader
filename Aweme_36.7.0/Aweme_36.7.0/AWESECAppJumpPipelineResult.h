@class AWESECAppJumpAllowListCheckResult, AWESECAppJumpProbeCheckResult, AWESECAppJumpUncaughtCheckResult, AWESECAppJumpRulerResult;

@interface AWESECAppJumpPipelineResult : AWESECAppJumpBasicCheckResult

@property (retain, nonatomic) AWESECAppJumpAllowListCheckResult *allowListCheckResult;
@property (retain, nonatomic) AWESECAppJumpAllowListCheckResult *precisionCheckResult;
@property (retain, nonatomic) AWESECAppJumpProbeCheckResult *probeCheckResult;
@property (retain, nonatomic) AWESECAppJumpUncaughtCheckResult *uncaughtCheckResult;
@property (retain, nonatomic) AWESECAppJumpRulerResult *rulerResult;

- (void)updateRiskLevelWithResult:(id)a0;
- (void).cxx_destruct;

@end
