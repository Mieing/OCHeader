@class DeviceInfoData, NSString, WCCardDataCardInfo, LocationRetriever, WCCardDataCardTPInfo, CBCentralManager, CLLocation, MMTimer;
@protocol AccessCardLogicDelegate;

@interface AccessCardLogicController : MMObject <CBCentralManagerDelegate, LocationRetrieveDelegate, PBMessageObserverDelegate> {
    MMTimer *_uploadTimer;
    CBCentralManager *_centralManager;
    DeviceInfoData *_foundDeviceWithMaxRSSI;
    BOOL _deviceInfoHasChanged;
    BOOL _deviceForceUpdate;
    NSString *_cardID;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    LocationRetriever *_locationRetriver;
    CLLocation *_curLocation;
    BOOL _locationHasChanged;
    BOOL _bIsBleScanning;
    BOOL _hasTurnedOnBluetooth;
    BOOL _hasAuthorizeLocation;
    BOOL _bIsShowingAlert;
    double _timerInterval;
    BOOL _bIsAlreadyShowLocationSwitchOff;
}

@property (weak, nonatomic) id<AccessCardLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardID:(id)a0 andCardInfo:(id)a1 andCardTPInfo:(id)a2;
- (void)dealloc;
- (void)updateWithCardID:(id)a0 andCardInfo:(id)a1 andCardTPInfo:(id)a2;
- (void)tryStart;
- (void)tryStop;
- (void)alertRefuseRetriveLocation;
- (void)alertConfirmRetriveLocation;
- (void)tryStartLocationLogic;
- (void)tryStopLocationLogic;
- (void)startRetriveLocation;
- (void)stopRetriveLocation;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)reportLocationWithLocation:(id)a0 ErrorCode:(long long)a1;
- (void)tryStartBLELogic;
- (void)realScanBLE;
- (void)tryStopBLELogic;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)tryUploadDataLogic;
- (void)tryStopUploadDataLogic;
- (void)doUplaodAction;
- (void)makeUploadRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onResponseProcess:(id)a0;
- (void).cxx_destruct;

@end
