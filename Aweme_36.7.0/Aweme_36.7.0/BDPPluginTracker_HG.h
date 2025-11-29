@interface BDPPluginTracker_HG : BDPBridgeInstancePlugin

- (void)sendAdLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendLogV3WithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)adTrackUrlsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportPointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)systemLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sentryReportWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setAnalyticsConfigSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportAnalyticsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportPageTimelineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportTimelinePointsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportJsRuntimeErrorWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportMetricsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportAppLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportGameTimelineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
