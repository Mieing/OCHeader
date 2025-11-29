@interface BDPPluginTracker : BDPBridgeInstancePlugin

- (void)sendAdLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)isValidMethod:(id)a0;
- (unsigned long long)logLevel:(id)a0;
- (id)logLevelAlias:(id)a0;
- (void)reportPointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)systemLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sentryReportWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setAnalyticsConfigSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportAnalyticsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportTimelineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportPageTimelineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportDiagnosePointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportTimelinePointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportJsRuntimeErrorWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportMetricsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportAppLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportInternalAppLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
