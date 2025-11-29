@class NSString, CLLocationManager;

@interface AWETrackerInitTaskLocationHelper : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceivedWillEnterForegroundNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
