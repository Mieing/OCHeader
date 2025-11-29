@class LocationAuthorizationInfo, NSString, CLLocationManager;

@interface SystemAuthorizationCheck : MMUserService <ILocationMgrExt, CLLocationManagerDelegate, MMServiceProtocol>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) LocationAuthorizationInfo *locationAuthorizationInfo;
@property (readonly, nonatomic) int locationAuthStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initMonitor;
+ (BOOL)isAPPFirstTimeRuning;
+ (unsigned int)getAuthStatusByItem:(unsigned int)a0;
+ (unsigned int)getPhotoLibraryAuthorizationStatus;
+ (unsigned int)getPhotoLibraryAuthorizationStatusForAccessLevel:(unsigned long long)a0;
+ (unsigned int)getCameraAuthorizationStatus;
+ (unsigned int)getContactsAuthorizationStatus;
+ (unsigned int)getMicrophoneAuthorizationStatus;
+ (unsigned int)getLocationAuthorizationStatus;
+ (unsigned int)getBluetoothAuthorizationStatusForIOS13_1;
+ (unsigned int)getBluetoothPeripheralAuthorizationStatus;
+ (id)getSettingNotifyState;
+ (unsigned int)getSportsAuthorizationStatus;
+ (id)currentVisibleAuthorizationItems;

- (id)init;
- (void)dealloc;
- (id)currentVc;
- (void)updateCachedLocationStatus:(int)a0;
- (void)logAndReportAuthorizationItem:(id)a0 item:(unsigned int)a1 action:(unsigned int)a2;
- (void)onCNCopySupportedInterfaces;
- (void)onRequestLocationAuthorization;
- (void)onRequestLocationUpdating:(unsigned long long)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)onGetWifiInfo;
- (void)reportVoiceOverIfOn;
- (void)listenVoiceOver;
- (void)reportElderMode;
- (void)startCheck;
- (void)reportWCFontLevel;
- (void)reportAuthorizationStatus:(id)a0;
- (void)reportSettingNotify;
- (void)reportReaderSetting;
- (BOOL)shouldReport;
- (void)updateReportTime;
- (unsigned long long)getNotificationAuthorizationStatus:(id)a0;
- (void).cxx_destruct;

@end
