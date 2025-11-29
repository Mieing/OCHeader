@interface BDUGLocationManager : NSObject

+ (void)requestLightLocationWithAccuracy:(long long)a0;
+ (id)getLightLocation;
+ (void)addMonitorForLightLocationDoneWithCompletion:(id /* block */)a0;
+ (BOOL)isAuthorizationStatusEnabled;
+ (long long)currentLocationAuthorizationAccuracyStatus;
+ (void)getCurrentLocationAuthorizationStatusWithCompletion:(id /* block */)a0;
+ (void)isAuthorizationStatusEnabledWithCompletion:(id /* block */)a0;
+ (void)requestLightLocationWithAccuracy:(long long)a0 isNotCheckAuthorizationStatus:(BOOL)a1;
+ (void)p_reverseGeocodeLocation:(id)a0 language:(id)a1 worldView:(id)a2 completion:(id /* block */)a3 selector:(SEL)a4;
+ (void)reverseGeocodeLocation:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
+ (void)reverseGeocodeLocation:(id)a0 completion:(id /* block */)a1;
+ (void)reverseGeocodeLocation:(id)a0 language:(id)a1 completion:(id /* block */)a2;
+ (void)reverseGeocodeLocation:(id)a0 language:(id)a1 worldView:(id)a2 completion:(id /* block */)a3;
+ (void)generalReverseGeocode:(id)a0 language:(id)a1 worldView:(id)a2 completion:(id /* block */)a3;
+ (void)requestIPLocationWithCompletion:(id /* block */)a0;
+ (void)requestIPLocationWithCert:(id)a0 completion:(id /* block */)a1;
+ (BOOL)headingAvailable;
+ (id)sharedManager;
+ (long long)currentLocationAuthorizationStatus;

- (void)subscribeToHeadingUpdatesForTarget:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeToHeadingUpdatesForTarget:(id)a0;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (id)requestLocationWithCert:(id)a0 option:(id)a1 completion:(id /* block */)a2;
- (id)lastLocationInfo;
- (void)monitorLocationChangeForTarget:(id)a0 desiredLevel:(long long)a1 completion:(id /* block */)a2;
- (void)requestWhenInUseAuthorizationWithCompletion:(id /* block */)a0;
- (id)requestLocationWithCert:(id)a0 completion:(id /* block */)a1;
- (void)cancelLocationRequest:(id)a0;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 cert:(id)a1 option:(id)a2 completion:(id /* block */)a3;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 desiredAccuracy:(long long)a1 activityType:(long long)a2 pausesLocationUpdatesAutomatically:(BOOL)a3 allowsBackgroundLocationUpdates:(BOOL)a4 distanceFilter:(double)a5 dataLevel:(long long)a6 uploadSource:(id)a7 option:(id)a8 completion:(id /* block */)a9;
- (void)unsubscribeToLocationUpdatesForTarget:(id)a0;
- (id)lastLocationInfoWithCert:(id)a0;
- (void)monitorLocationChangeForTarget:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void)cancelLocationChangeMonitorForTarget:(id)a0;
- (void)setCustomLatitude:(double)a0 longitude:(double)a1;
- (void)setDebugWifiMacAddress:(id)a0;
- (void)setDebugWifiName:(id)a0;
- (void)addSubmitObserverForKey:(id)a0 callback:(id /* block */)a1;
- (void)removeSubmitObserverForKey:(id)a0;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 completion:(id /* block */)a1;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 completion:(id /* block */)a2;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 timeout:(double)a2 uploadSource:(id)a3 completion:(id /* block */)a4;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 desiredAccuracy:(long long)a1 option:(id)a2 completion:(id /* block */)a3;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 desiredAccuracy:(long long)a1 distanceFilter:(double)a2 uploadSource:(id)a3 option:(id)a4 completion:(id /* block */)a5;
- (void)requestWhenInUseAuthorizationWithBDCert:(id)a0 completion:(id /* block */)a1;
- (id)requestLocationWithCompletion:(id /* block */)a0;
- (id)requestLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void)subscribeToLocationUpdatesForTarget:(id)a0 completion:(id /* block */)a1;
- (void)monitorLocationChangeForTarget:(id)a0 completion:(id /* block */)a1;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 completion:(id /* block */)a1;
- (void)setDebug:(BOOL)a0;
- (BOOL)isDebugMode;

@end
