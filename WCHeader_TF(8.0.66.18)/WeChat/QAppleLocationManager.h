@class NSString, CLLocationManager;

@interface QAppleLocationManager : QLocationManager <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKey:(id)a0;
- (void)requestTempPrecisedLocation:(id)a0 completion:(id /* block */)a1;
- (void)requestWhenInUseAuthorization;
- (long long)accuracyAuthorization;
- (int)authorizationStatus;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;

@end
