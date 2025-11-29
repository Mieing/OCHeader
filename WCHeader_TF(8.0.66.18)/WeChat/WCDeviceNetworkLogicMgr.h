@protocol WCDeviceNetworkLogicMgrDelegate;

@interface WCDeviceNetworkLogicMgr : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCDeviceNetworkLogicMgrDelegate> delegate;

- (void)dealloc;
- (void)sendRequest:(id)a0 Retry:(unsigned int)a1;
- (void)sendWCDeviceBindRequest:(id)a0 Ticket:(id)a1 SubscribeFlag:(unsigned int)a2;
- (void)sendWCDeviceUnbindRequest:(id)a0;
- (void)sendWCDeviceUnbindSingleDeviceRequest:(id)a0 deviceId:(id)a1;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)searchWCDeviceForQRCode:(id)a0;
- (void)batchSearchWCDeviceByMac:(id)a0 Filter:(id)a1 Secene:(int)a2;
- (void)sendWCDevicesGetOperTicketRequest:(id)a0 Filter:(id)a1;
- (void)sendUpdateMyDeviceAttrRequest:(id)a0 alias:(id)a1 isMain:(unsigned int)a2;
- (void)sendUploadDeviceStepReq:(id)a0 stepCount:(unsigned int)a1 fromTime:(unsigned int)a2 toTime:(unsigned int)a3 hkSourceList:(id)a4;
- (void)sendDeviceStepReq:(id)a0 stepObject:(id)a1;
- (void)sendSearchWifiHardDeviceReq:(id)a0;
- (void)sendSearchBLEHardDevice:(id)a0;
- (void)sendGetSportDeviceListReq;
- (void)sendWorkoutActivityReqWithRecord:(id)a0;
- (void)sendSummaryActivityReqWithGoal:(id)a0;
- (void)handleUpdateMyDeviceAttrResponse:(id)a0;
- (void)handleGetHardDeviceOperTicketResponse:(id)a0;
- (void)handleWCDeviceBindResponse:(id)a0;
- (void)handleUploadDeviceStepResponse:(id)a0;
- (void)handleUploadActivityResponse:(id)a0;
- (void)onSendWCDeviceUnbindResponse:(id)a0 Request:(id)a1 HardDevice:(id)a2 UserData:(id)a3;
- (void)onSendWCDeviceGetBoundDevicesResponse:(id)a0 Request:(id)a1;
- (void)onSearchDeviceResponse:(id)a0 Request:(id)a1;
- (void)onBatchSearchHardDeviceResponse:(id)a0 Request:(id)a1;
- (void)handleWCDeviceUnbindResponse:(id)a0;
- (void)handleWCDeviceGetBoundDevicesResponse:(id)a0;
- (void)handleWCDeviceSearchResponse:(id)a0;
- (void)handleBatchSearchHardDeviceResponse:(id)a0;
- (void)handleSearchWifiHardDeviceResponse:(id)a0;
- (void)handleSearchBLEHardDeviceResponse:(id)a0;
- (void)handleGetSportDeviceListResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
