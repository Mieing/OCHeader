@interface BDPPluginTrackerIG : BDPBridgeInstancePlugin

- (BOOL)isValidMethod:(id)a0;
- (void)systemLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sentryReportWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportAnalyticsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportJsRuntimeErrorWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
