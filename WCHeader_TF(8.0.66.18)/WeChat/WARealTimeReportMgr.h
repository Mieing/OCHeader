@class NSString, MMTimer, NSMutableArray, ReportDeviceInfo;

@interface WARealTimeReportMgr : MMUserService <MMServiceProtocol> {
    MMTimer *_timerReportCheck;
    NSMutableArray *_arrReportInfo;
    unsigned int _reportTimeInterval;
    unsigned int _lastReportTime;
    ReportDeviceInfo *_deviceInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportPageRouteInfo:(id)a0 appID:(id)a1 withExtBaseItem:(id)a2;
- (void)reportJSRealtimeAction:(id)a0 appID:(id)a1 withExtBaseItem:(id)a2;
- (void)startRealTimeReportTimer;
- (void)invadateRealTimeReportTimer;
- (void)onTimerRealTimeReportTimer:(id)a0;
- (void)realTimeReportInfo;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)onReportResponse:(id)a0;
- (void).cxx_destruct;

@end
