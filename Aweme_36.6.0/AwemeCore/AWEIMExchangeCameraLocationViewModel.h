@class NSString, NSDictionary, AWEIMAroundPOIManagerWrapper, MKMapView, UIImage, AFDMomentCameraContext;
@protocol AFDMomentCameraFlowService;

@interface AWEIMExchangeCameraLocationViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraFlowServiceSubscriber, AWEIMPoiManagerWrapperDelegate, MKMapViewDelegate>

@property (copy, nonatomic) NSDictionary *locationInfo;
@property (nonatomic) BOOL shouldShowLocationAnchor;
@property (nonatomic) BOOL shouldShowLocationButton;
@property (nonatomic) BOOL closeCameraVC;
@property (nonatomic) unsigned long long loadingState;
@property (retain, nonatomic) AWEIMAroundPOIManagerWrapper *searchAroundManager;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) UIImage *locationImage;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)didTapLocationButton;
- (void)p_handleError;
- (void)p_beginMakeSnapShotAndSearchPOIWithCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)makeMapViewIfNeededWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_didFinishMakeSnapShot:(id)a0 andLocationInfo:(id)a1;
- (void)searchPoiManager:(id)a0 dataSourceDidChange:(id)a1 isLoadMore:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mapView:(id)a0 didFailToLocateUserWithError:(id)a1;
- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
