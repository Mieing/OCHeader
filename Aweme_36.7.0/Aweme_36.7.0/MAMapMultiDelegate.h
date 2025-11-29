@class NSString, NSMutableArray;

@interface MAMapMultiDelegate : NSObject <MAMapViewDelegate>

@property (weak, nonatomic) id originalDelegate;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1 wasUserAction:(BOOL)a2;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1 wasUserAction:(BOOL)a2;
- (void)mapView:(id)a0 mapWillMoveByUser:(BOOL)a1;
- (void)mapView:(id)a0 mapDidMoveByUser:(BOOL)a1;
- (void)mapView:(id)a0 mapWillZoomByUser:(BOOL)a1;
- (void)mapView:(id)a0 mapDidZoomByUser:(BOOL)a1;
- (void)mapViewRequireLocationAuth:(id)a0;
- (void)mapView:(id)a0 didAnnotationViewCalloutTapped:(id)a1;
- (void)mapView:(id)a0 didAnnotationViewTapped:(id)a1;
- (void)mapView:(id)a0 didTouchPois:(id)a1;
- (void)mapInitComplete:(id)a0;
- (void)removeAllDelegates;
- (void)mapViewRegionChanged:(id)a0;
- (void)mapView:(id)a0 didUpdateUserLocation:(id)a1 updatingLocation:(BOOL)a2;
- (void)mapView:(id)a0 didChangeOpenGLESDisabled:(BOOL)a1;
- (void)mapView:(id)a0 didSingleTappedAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mapView:(id)a0 didLongPressedAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mapView:(id)a0 didIndoorMapShowed:(id)a1;
- (void)mapView:(id)a0 didIndoorMapFloorIndexChanged:(id)a1;
- (void)mapView:(id)a0 didIndoorMapHidden:(id)a1;
- (void)offlineDataWillReload:(id)a0;
- (void)offlineDataDidReload:(id)a0;
- (void)insertDelegateInLast:(id)a0;
- (id)findDelegateObjectByDelegate:(id)a0;
- (void)addDelegate:(id)a0 isOriginalDelegate:(BOOL)a1;
- (void)removeInvalidDelegate;
- (id)getAllMapDelegates;
- (BOOL)isExistedSelector:(SEL)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)mapView:(id)a0 didFailToLocateUserWithError:(id)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 annotationView:(id)a1 didChangeDragState:(long long)a2 fromOldState:(long long)a3;
- (void)mapViewWillStartLoadingMap:(id)a0;
- (void)mapViewDidFinishLoadingMap:(id)a0;
- (void)mapViewDidFailLoadingMap:(id)a0 withError:(id)a1;
- (void)mapView:(id)a0 annotationView:(id)a1 calloutAccessoryControlTapped:(id)a2;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)mapViewWillStartLocatingUser:(id)a0;
- (void)mapViewDidStopLocatingUser:(id)a0;
- (void)mapView:(id)a0 didChangeUserTrackingMode:(long long)a1 animated:(BOOL)a2;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapView:(id)a0 didAddOverlayRenderers:(id)a1;

@end
