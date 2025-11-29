@class NSString;

@interface AWELocationInfoServiceImpl : NSObject <AWELocationInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hasPermissionWithoutServiceInit;
- (unsigned long long)getLocationAccessStatusWithoutServiceInit;
- (void)requestLightLocationWithAccuracy:(long long)a0;
- (id)getLightLocation;
- (void)addMonitorForLightLocationDoneWithCompletion:(id /* block */)a0;
- (id)getCurrentLocationWithBDCert:(id)a0 encodeType:(unsigned long long)a1;
- (id)transformLocationWithCLLocation:(id)a0 encodeType:(unsigned long long)a1;
- (void)requestCurrentLocationWithBDCert:(id)a0 completion:(id /* block */)a1;
- (void)requestCurrentLocationWithBDCert:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (void)requestCurrentLocationWithBDCert:(id)a0 allErrorsCompletion:(id /* block */)a1;
- (void)serialRequestCurrentLocationWithBDCert:(id)a0 completion:(id /* block */)a1;
- (void)serialRequestCurrentLocationWithBDCert:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (id)subscribeLocationUpdateWithBDCert:(id)a0 completion:(id /* block */)a1;
- (void)subscribeLocationLevelChangeServiceForTarget:(id)a0 BDCert:(id)a1 completion:(id /* block */)a2;
- (void)requestBluetoothLocationWithBDCert:(id)a0 businessName:(id)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (void)cancelLocationLevelChangeServiceForTarget:(id)a0;
- (void)addLocationSubmitObserverForKey:(id)a0 callback:(id /* block */)a1;
- (void)removeLocationSubmitObserverForKey:(id)a0;
- (void)reverseGeoCode:(id)a0 BDCert:(id)a1 completion:(id /* block */)a2;
- (void)requestPermissionWithBDCert:(id)a0 completion:(id /* block */)a1;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 BDCert:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)getLocationAccessStatus;
- (void)getLocationAccessStatusWithBlock:(id /* block */)a0;
- (void)hasPermissionWithBlock:(id /* block */)a0;
- (unsigned long long)getHeadlingAccessStatus;
- (id)subscribeHeadlingUpdateWithCompletion:(id /* block */)a0;
- (long long)getCurrentLocationAuthorizationAccuracyStatus;
- (BOOL)isSystemLocationAlertShowned;
- (void)setChildMode:(BOOL)a0;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasPermission;

@end
