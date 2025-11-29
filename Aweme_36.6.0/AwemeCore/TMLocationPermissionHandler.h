@class NSString, CLLocationManager;

@interface TMLocationPermissionHandler : TMPrivacyPermissionHandler <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int locationAuthorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)permissionState;
- (id)permssionType;
- (long long)savedPermissionState;
- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
