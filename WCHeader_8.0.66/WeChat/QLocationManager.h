@class NSString;
@protocol QLocationManagerAPIProcotol, QLocationManagerDelegate;

@interface QLocationManager : NSObject <CLLocationManagerDelegate, QLocationManagerAPIProcotol>

@property (retain, nonatomic) id<QLocationManagerAPIProcotol> manager;
@property (weak, nonatomic) id<QLocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double headingFilter;
@property (nonatomic) int headingOrientation;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property (readonly, nonatomic) long long accuracyAuthorization;
@property (readonly, nonatomic) int authorizationStatus;

- (id)initWithKey:(id)a0;
- (void)requestTempPrecisedLocation:(id)a0 completion:(id /* block */)a1;
- (void)requestWhenInUseAuthorization;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void).cxx_destruct;

@end
