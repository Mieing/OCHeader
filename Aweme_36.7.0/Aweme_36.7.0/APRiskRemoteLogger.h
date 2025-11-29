@interface APRiskRemoteLogger : NSObject

+ (void)loggerMonitorReportWithParam:(id)a0 seed:(id)a1 ucId:(id)a2;
+ (void)loggerMonitorReportWithParam:(id)a0 seed:(id)a1 ucId:(id)a2 bizType:(id)a3;
+ (void)monitorIntializeNormal:(id)a0;
+ (void)monitorIntializeAbnormal:(id)a0;
+ (void)monitorGetRiskResult:(id)a0;
+ (void)monitorSyncInfo:(id)a0;
+ (void)monitorInjectListInfo:(id)a0;
+ (void)monitorPlugScanResult:(id)a0;
+ (void)monitorBehaviorData;
+ (void)monitorScanH5Data:(id)a0;
+ (void)monitorSafeStore:(id)a0;
+ (void)monitorLightData:(id)a0;
+ (void)monitorContentDetect:(id)a0;
+ (void)monitorAntiFraud:(id)a0;
+ (void)monitorFastRiskControl:(id)a0;
+ (void)monitorCashierRpcFilter:(id)a0;
+ (void)monitorRPCLRKEY:(id)a0;
+ (void)monitorFeatureFull;
+ (void)monitorTransferData:(id)a0;
+ (void)monitorEdgeSyncUpdate:(id)a0;
+ (void)monitorModelBuried:(id)a0;
+ (void)monitorScanData:(id)a0;
+ (void)monitorContentDetectResult:(id)a0;
+ (void)monitorContentDetectRuleResult:(char *)a0;
+ (void)monitorContentResourceUpdate:(id)a0;
+ (void)monitorScpFrameworkResult:(id)a0 protocol:(id)a1 log:(id)a2;
+ (void)monitorApdidInitStatus:(long long)a0;
+ (void)monitorBehaviorOtherData:(id)a0;
+ (void)monitorSensorOtherData:(id)a0;
+ (void)monitorCheatOtherData:(id)a0;
+ (void)monitorOneKeyStopResult:(id)a0 result:(id)a1 cost:(id)a2;
+ (void)monitorDynamicVmResult:(id)a0 cost:(id)a1;
+ (void)monitorDynamicDetect:(id)a0;
+ (void)monitorTimerDetect:(id)a0;
+ (void)monitorScreenRecording:(id)a0;
+ (void)monitorDeviceColorInfo:(id)a0;
+ (void)monitorBotDetection:(id)a0;

@end
