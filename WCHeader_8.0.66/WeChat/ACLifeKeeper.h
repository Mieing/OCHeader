@class NSString, CLLocationManager;

@interface ACLifeKeeper : NSObject <CLLocationManagerDelegate> {
    unsigned long long _backgroundTaskIdentifier;
}

@property (readonly, nonatomic) CLLocationManager *locationManager;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)active;
- (void)deactive;
- (void)startBackgroundTask;
- (void)startBackgroundTaskIfNeeded;
- (void)stopBackgroundTask;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)startUpdatingLocation:(BOOL)a0;
- (void)stopUpdatingLocation;
- (void)_locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;

@end
