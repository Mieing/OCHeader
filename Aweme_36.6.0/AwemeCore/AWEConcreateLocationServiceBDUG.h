@class AWELocationServicePersistModel, AWELocationServiceSDKConfig;

@interface AWEConcreateLocationServiceBDUG : AWELocationService

@property (retain, nonatomic) AWELocationServiceSDKConfig *sdkConfig;
@property (nonatomic) double minUpdateInterval;
@property (retain) AWELocationServicePersistModel *internalLocation;
@property (nonatomic) BOOL alreadyUploadedDeviceInfo;
@property (nonatomic) BOOL removeRemoteLocationData;

+ (void)requestLightLocationWithAccuracy:(long long)a0;
+ (id)getLightLocation;
+ (void)addMonitorForLightLocationDoneWithCompletion:(id /* block */)a0;
+ (unsigned long long)_locationAccessStatus;
+ (void)initLocationSDKWithConfig:(id)a0 type:(unsigned long long)a1;
+ (id)sharedInstance;
+ (BOOL)hasPermission;

- (id)getCurrentLocationWithBDCert:(id)a0 encodeType:(unsigned long long)a1;
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
- (void)setChildMode:(BOOL)a0;
- (unsigned long long)_locationAccessStatus;
- (void)setupSDKWithConfig:(id)a0 type:(unsigned long long)a1;
- (id)certDictionary;
- (unsigned long long)_headlingAccessStatus;
- (BOOL)isLocationSDKConfigReadyWithScene:(id)a0;
- (void)_assignLocationPersistModel:(id)a0 withPlacemark:(id)a1;
- (id)currentLocationWithBDCert:(id)a0;
- (id)standardizedCurrentLocationWithBDCert:(id)a0;
- (void)_requestCurrentLocationWithBDCert:(id)a0 option:(id)a1 needAllErrors:(BOOL)a2 completion:(id /* block */)a3;
- (void)_handleCurrentLocationWithBDCert:(id)a0 locationInfo:(id)a1 error:(id)a2 needAllErrors:(BOOL)a3 completion:(id /* block */)a4;
- (unsigned long long)transformPermissionStatus:(long long)a0;
- (id)_locationModelWithPlaceMark:(id)a0 location:(id)a1 safeLocation:(id)a2 source:(long long)a3;
- (void)l_saveLocation:(id)a0 safeLocation:(id)a1 placeMark:(id)a2 source:(long long)a3 completion:(id /* block */)a4;
- (long long)_currentLocationAuthorizationAccuracyStatus;
- (void)requestPermission:(id /* block */)a0;
- (void)uploadDeviceInfo;
- (id)standardizedCurrentLocation;
- (void)reverseGeoCode:(id)a0 completion:(id /* block */)a1;
- (long long)l_bdugAccuracyWithAWELocationAccuracy:(long long)a0;
- (void).cxx_destruct;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 completion:(id /* block */)a1;
- (id)currentLocation;
- (void)dealloc;

@end
