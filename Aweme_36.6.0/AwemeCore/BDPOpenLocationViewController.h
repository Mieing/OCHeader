@class BDPLocationModel, NSString, BDPDirectionNaviView, BDPDirectionMapView;

@interface BDPOpenLocationViewController : BDPViewController <BDPDirectionMapViewDelegate, BDPDirectionNaviViewDelegate>

@property (retain, nonatomic) BDPDirectionMapView *mapView;
@property (retain, nonatomic) BDPDirectionNaviView *naviView;
@property (retain, nonatomic) BDPLocationModel *locationModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapViewDidChooseToShowNavigate:(id)a0;
- (void)mapNavigationBarDidSelectBack;
- (void)mapNavigationBarDidSelectDrivingItem:(id)a0;
- (void)mapNavigationBarDidSelectWalkingItem:(id)a0;
- (void)directionRoute;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)navigationBarHidden;

@end
