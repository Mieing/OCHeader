@class NSString;
@protocol MAMapViewDelegateHandlerDelegate;

@interface MAMapViewDelegateHandler : NSObject <MAMapViewDelegate, BDMAHandlerProtocol>

@property (weak, nonatomic) id<MAMapViewDelegateHandlerDelegate> delegate;
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
- (void)mapView:(id)a0 didFailLoadTerrainWithError:(id)a1;
- (void)mapView:(id)a0 didAnnotationViewCalloutTapped:(id)a1;
- (void)mapView:(id)a0 didAnnotationViewTapped:(id)a1;
- (void)mapView:(id)a0 didTouchPois:(id)a1;
- (void)mapInitComplete:(id)a0;
- (void)mapViewRegionChanged:(id)a0;
- (void)mapView:(id)a0 didSingleTappedAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)mapView:(id)a0 didLongPressedAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void).cxx_destruct;
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
- (void)mapView:(id)a0 didChangeUserTrackingMode:(long long)a1 animated:(BOOL)a2;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapView:(id)a0 didAddOverlayRenderers:(id)a1;

@end
