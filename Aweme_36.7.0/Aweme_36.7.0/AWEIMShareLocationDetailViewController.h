@class MKPointAnnotation, NSDictionary, AWEIMShareLocationNaviPresenter, CLLocationManager, MKAnnotationView, UIView, AWEUITheme, UIButton, AWEIMShareLocationDetailPOIView, NSString, AWEIMShareLocationDetailBottomView, AWEIMShareLocationMessage, MKMapView;
@protocol AWEIMLocationInfoProtocol;

@interface AWEIMShareLocationDetailViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>

@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) UIButton *setUserLocationCenterButton;
@property (retain, nonatomic) AWEIMShareLocationDetailBottomView *bottomView;
@property (retain, nonatomic) AWEIMShareLocationDetailPOIView *poiView;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } userCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } targetCoordinate;
@property (retain, nonatomic) MKPointAnnotation *targetAnnotation;
@property (nonatomic) BOOL isSetCenterToCurrentLocation;
@property (retain, nonatomic) MKAnnotationView *userLocationView;
@property (retain, nonatomic) AWEIMShareLocationNaviPresenter *naviPresenter;
@property (retain, nonatomic) id<AWEIMLocationInfoProtocol> locationInfo;
@property (retain, nonatomic) AWEIMShareLocationMessage *shareLocationMessage;
@property (retain, nonatomic) UIView *snapShotView;
@property (nonatomic) BOOL userLocationHasUpdated;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) double direction;
@property (retain, nonatomic) AWEUITheme *globalTheme;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClicked:(id)a0;
- (BOOL)showPOIDetail;
- (id)initWithShareLocationMessage:(id)a0;
- (id)initWithShareLocationInfo:(id)a0 trackParams:(id)a1;
- (void)p_setupNavigationBar;
- (void)p_setupAnnotation;
- (void)p_setupPoiData;
- (void)requestPOIDetail;
- (void)p_refreshAnnotationWithPOIModel:(id)a0;
- (void)trackEnterDetailWithInfo:(id)a0;
- (void)setUserLocationCenterAction;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
