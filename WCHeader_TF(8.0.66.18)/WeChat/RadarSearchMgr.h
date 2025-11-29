@class RadarSearchSetting, NSString, MMTimer, CLLocation, LocationRetriever;

@interface RadarSearchMgr : MMUserService <MMServiceProtocol, LocationRetrieveDelegate, PBMessageObserverDelegate> {
    BOOL _isStartReport;
    LocationRetriever *_locationRetrieve;
    MMTimer *_sendReportTimer;
    NSString *_ticket;
}

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) RadarSearchSetting *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (id)getSettingPath;
- (void)loadRadarSearchSetting;
- (void)saveSetting;
- (void)startRetrieveLocationFor:(unsigned long long)a0;
- (void)stopRetrieveLocation;
- (void)reSendRadarReportRequest;
- (void)startResendRadarReportLogic;
- (void)stopResendRadarReportLogic;
- (void)startRadarReport;
- (void)removeRadarReportRequest;
- (void)stopRadarReport;
- (void)addFriend:(id)a0;
- (void)verifyUsr:(id)a0 withTicket:(id)a1;
- (void)sendRadarReportRequest:(BOOL)a0;
- (id)getLocation;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)onSendRequestFail:(id)a0;
- (void)onAddContactSuccessed:(id)a0;
- (void)onSendRequestSuccessed:(id)a0 pbCGIWrap:(id)a1;
- (void)onVerifyOkFail:(id)a0;
- (void)onVerifyOkSuccessed:(id)a0;
- (void)HandleVerifyUserResp:(id)a0 Event:(unsigned int)a1;
- (void)HandleRadarSearchResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
