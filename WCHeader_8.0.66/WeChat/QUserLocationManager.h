@class QLocationManager, QMapContext, NSString, QLocationMarkerWrapper;
@protocol QUserLocationManagerDelegate;

@interface QUserLocationManager : NSObject <QLocationManagerDelegate>

@property (retain, nonatomic) QLocationManager *manager;
@property (retain, nonatomic) QLocationMarkerWrapper *locationMarkerWrapper;
@property (weak, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) id<QUserLocationManagerDelegate> delegate;
@property (nonatomic) long long locatorDisplayLevel;
@property (nonatomic) int locatorZIndex;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic) double headingFilter;
@property (readonly, nonatomic) long long accuracyAuthorization;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)correctLocation:(id)a0;

- (void)dealloc;
- (void)constructLocator:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocation:(id)a1;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)requestTempPrecisedLocation:(id)a0 completion:(id /* block */)a1;
- (void)requestWhenInUseAuthorization;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)configureUserLocationPresentation:(id)a0;
- (void)setLocationHidden:(BOOL)a0;
- (void)setLocationCompassHidden:(BOOL)a0;
- (void)setLocationRedlineHidden:(BOOL)a0;
- (void)updateLocationAnimatedWithMapPoint:(struct { double x0; double x1; })a0 course:(double)a1 horizontalAccuracy:(double)a2;
- (void)updateLocationWithMapPoint:(struct { double x0; double x1; })a0 course:(double)a1;
- (void)updateLocationWithHeading:(double)a0;
- (void)setup;
- (id)init;
- (id)generateLocatorPayload:(id)a0;
- (void).cxx_destruct;

@end
