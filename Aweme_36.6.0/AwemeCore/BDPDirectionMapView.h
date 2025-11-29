@class BDPLocationModel, NSString, NSArray, BDPDirectionAnnotation, MKAnnotationView, BDPDirectionDetailView;
@protocol BDPDirectionMapViewDelegate;

@interface BDPDirectionMapView : MKMapView <MKMapViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) BOOL shouldShowOrigin;
@property (nonatomic) BOOL shouldShowWalking;
@property (nonatomic) BOOL shouldShowDriving;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } destination;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } origin;
@property (copy, nonatomic) NSString *drivingTime;
@property (copy, nonatomic) NSString *walkingTime;
@property (retain, nonatomic) NSArray *drivingOverlays;
@property (retain, nonatomic) NSArray *walkingOverlays;
@property (retain, nonatomic) BDPLocationModel *model;
@property (retain, nonatomic) BDPDirectionDetailView *detailView;
@property (retain, nonatomic) BDPDirectionAnnotation *poiAnnotation;
@property (retain, nonatomic) BDPDirectionAnnotation *userAnnotation;
@property (retain, nonatomic) MKAnnotationView *poiAnnotationView;
@property (retain, nonatomic) MKAnnotationView *userAnnotationView;
@property (weak, nonatomic) id<BDPDirectionMapViewDelegate> mapViewDelegate;
@property (nonatomic) BOOL shouldShowNavi;
@property (nonatomic) long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void)showOverlaysForCurrentTransportType;
- (void)updateMapStatus;
- (void)constructDirectionsWithCompletion:(id /* block */)a0;
- (void)requestDirectionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)handleTap:(id)a0;

@end
