@class BDKMapView, MKMapView, UIGestureRecognizer;
@protocol BDXLynxMapContainerViewDelegate;

@interface BDXLynxMapContainerView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } tapPoint;
@property (weak, nonatomic) UIGestureRecognizer *observerGesture;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) BDKMapView *bdMapView;
@property (weak, nonatomic) id<BDXLynxMapContainerViewDelegate> delegate;

- (void)_tapGestureHandler:(id)a0;
- (void)_observedGestureRemoveStateObserver;
- (void)_tapMapViewActionWitPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
