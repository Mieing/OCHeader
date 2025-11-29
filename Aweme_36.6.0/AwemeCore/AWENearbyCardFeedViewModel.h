@class NSNumber, AWENearbyPageContext;

@interface AWENearbyCardFeedViewModel : AWEBaseViewModel

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) BOOL isLocationRequesting;
@property (retain) NSNumber *shouldShowAlert;
@property (retain) NSNumber *needRefreshByLocationPermission;

- (void)requestLocationPermission;
- (id)initWithPageContext:(id)a0;
- (void)requestLocationPermissionWithConfig:(id)a0;
- (void)p_requestLocationPermission;
- (void)addObserverWhenViewDidLoad;
- (void).cxx_destruct;

@end
