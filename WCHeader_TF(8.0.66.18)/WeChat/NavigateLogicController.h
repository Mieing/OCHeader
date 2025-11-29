@class NavigateItem, NSString, NSArray, QPolyline, QMapView, NSMutableArray;
@protocol NavigateLogicControllerDelegate;

@interface NavigateLogicController : MMObject <WCActionSheetDelegate, IMapDirectionsMgrExt> {
    int _scene;
    unsigned long long _topMapType;
}

@property (retain, nonatomic) QMapView *mapView;
@property (retain, nonatomic) NavigateItem *navigateFrom;
@property (retain, nonatomic) NavigateItem *navigateTo;
@property (retain, nonatomic) NSMutableArray *navigateMaps;
@property (readonly, nonatomic) NSMutableArray *displayNavigateMaps;
@property (retain, nonatomic) QPolyline *lastDirections;
@property (copy, nonatomic) NSString *sessionId;
@property (weak, nonatomic) id<NavigateLogicControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *displayNavigateMapNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapView:(id)a0 Scene:(int)a1;
- (void)updateMapView:(id)a0;
- (id)getUserLocationByMapView;
- (void)sortMapsByTopMapType;
- (BOOL)isLocationInChina:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)getOpenButtonTitle:(id)a0;
- (id)getInstallButtonTitle:(id)a0;
- (id)getUrlScheme:(id)a0 From:(id)a1 To:(id)a2 MapType:(int)a3;
- (void)showNavigateMenuWithTopMapType:(unsigned long long)a0 To:(id)a1 InView:(id)a2;
- (void)showNavigateMenu:(id)a0 From:(id)a1 To:(id)a2 WithWeApp:(id)a3 WeAppDatas:(id)a4 InView:(id)a5;
- (void)showNavigateMenu:(id)a0 From:(id)a1 To:(id)a2 InView:(id)a3;
- (void)showWeAppMenu:(id)a0 WeApps:(id)a1;
- (void)navigateFrom:(id)a0 To:(id)a1 UsingMap:(id)a2;
- (void)showDirectionsFrom:(id)a0 To:(id)a1;
- (void)showDirections;
- (void)hideDirections;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (BOOL)checkIsSelectWeAppButtonTitle:(id)a0 OnActionSheet:(id)a1;
- (void)openWeApp:(id)a0;
- (id)mapNameForMap:(id)a0;
- (void)OnGetDirections:(id)a0 RequestItem:(id)a1;
- (void)OnRequestDirectionsError:(int)a0;
- (id)getNavigationItemEventSdkReportParams:(id)a0;
- (void)reportNavigationActionSheetItemExpose;
- (void)reportNavigationActionSheetItemClick:(id)a0 IsInstalled:(BOOL)a1;
- (long long)getNavigationItemReportCodeForMapType:(int)a0;
- (id)reportStringFromDisplayNavigateMaps:(id)a0;
- (void).cxx_destruct;

@end
