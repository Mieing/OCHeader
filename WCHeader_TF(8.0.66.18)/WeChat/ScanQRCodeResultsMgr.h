@class NSString, MMUIViewController, ScanQRCodeLogicController, NSMutableArray;

@interface ScanQRCodeResultsMgr : MMUserService <INetworkStatusMgrExt, BaseScanLogicDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *offlineResults;
@property (retain, nonatomic) ScanQRCodeLogicController *scanLogicController;
@property (weak, nonatomic) MMUIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)msgScanHistoryItemFromScanResultInfo:(id)a0;
+ (id)scanResultRepotInfoFromMsgHistoryItem:(id)a0;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)sendMessageForScanResult:(id)a0;
- (void)retryRequetScanResult:(id)a0 viewController:(id)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)appendOfflineScanResultInfo:(id)a0;
- (void)appendReportScanResultInfo:(id)a0;
- (id)scanCodeOfflineResultDir;
- (void)loadScanCodeOfflineResult;
- (BOOL)saveScanCodeOfflineResult;
- (void)onPushViewContoller:(id)a0 animated:(BOOL)a1;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onShowAlertWording;
- (void)onScanInUnreachableNetworkStatus;
- (void)onScanRequestTimeout;
- (void)reportScanResultActionWithResultInfo:(id)a0 isRetry:(BOOL)a1;
- (void).cxx_destruct;

@end
