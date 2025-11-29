@interface BDUGFlowStatisticsTracker : NSObject

+ (void)event:(id)a0 params:(id)a1;
+ (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)commonClickParams;
+ (id)requestOperationWithAction:(unsigned long long)a0;
+ (id)commonMonitorParams;
+ (void)registerTrackerClass:(Class)a0;
+ (void)trackerSDKLanch;
+ (void)trackerQueryIdWithReason:(unsigned long long)a0;
+ (void)trackerQueryIdResultWithReason:(unsigned long long)a0 isSuccess:(BOOL)a1 carrierId:(id)a2;
+ (void)trackerQueryPopupsResultWithIsSuccess:(BOOL)a0 isFree:(BOOL)a1 isUseout:(BOOL)a2 isPopup:(BOOL)a3;
+ (void)trackerPopupsWithType:(id)a0;
+ (void)trackerClickFreeFlowWithType:(id)a0;
+ (void)trackerClickContinueWithType:(id)a0;
+ (void)trackerClickFreeFlowReturnWithType:(id)a0;
+ (void)trackerRequestFailureWithAction:(unsigned long long)a0 carrier:(id)a1 errorCode:(id)a2 errMsg:(id)a3;
+ (void)trackerRequestSuccessWithAction:(unsigned long long)a0 carrier:(id)a1;
+ (void)trackerFreeFlowShowWithType:(unsigned long long)a0 isFree:(BOOL)a1 isUseout:(BOOL)a2;
+ (void)trackerIos12Carrier;
+ (void)getCommonTrackerParams:(id /* block */)a0;
+ (void)getFlowInfoCommonParams:(id /* block */)a0;
+ (void)registerMonitorClass:(Class)a0;
+ (void)monitorFlowGetSignWithReason:(unsigned long long)a0;
+ (void)monitorFlowGetSignResponseWithReason:(unsigned long long)a0 success:(BOOL)a1 errorCode:(id)a2 errorMsg:(id)a3;
+ (void)monitorFlowCarrierIdWithReason:(unsigned long long)a0;
+ (void)monitorFlowCarrierIdResponseWithReason:(unsigned long long)a0 success:(BOOL)a1 errorCode:(id)a2 errorMsg:(id)a3;
+ (void)monitorFlowQueryInfoWithReason:(unsigned long long)a0;
+ (void)monitorFlowQueryInfoResponseWithReason:(unsigned long long)a0 success:(BOOL)a1 errorCode:(id)a2 errorMsg:(id)a3;
+ (void)getCommonMonitorParams:(id /* block */)a0;
+ (void)monitorGetSign:(BOOL)a0 data:(id)a1 errorMsg:(id)a2 duration:(long long)a3 cdid:(id)a4;
+ (void)monitorGetToken:(BOOL)a0 data:(id)a1 errorMsg:(id)a2 duration:(long long)a3 cdid:(id)a4;
+ (void)monitorWifiSwitch:(BOOL)a0 isSwitchToWifi:(BOOL)a1 errorMsg:(id)a2 startTime:(id)a3 cdid:(id)a4;
+ (void)monitorCenterReportTokenSuccess:(BOOL)a0 data:(id)a1 errorMsg:(id)a2 duration:(long long)a3 logid:(id)a4 cdid:(id)a5;

@end
