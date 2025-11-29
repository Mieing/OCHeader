@interface HMDShieldiOS16MetricManager : NSObject

+ (void)install;

- (void)HMD_deliverMetricPayload:(id)a0;
- (void)HMD_deliverDiagnosticPayload:(id)a0;

@end
