@class NSString, CLLocationManager;

@interface BDLCTask : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *locateId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDesiredAccuracy:(long long)a0 activityType:(long long)a1 pausesLocationUpdatesAutomatically:(BOOL)a2 allowsBackgroundLocationUpdates:(BOOL)a3 distanceFilter:(double)a4 cert:(id)a5 locateId:(id)a6 completion:(id /* block */)a7;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)stopUpdatingLocation;
- (void)dealloc;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
