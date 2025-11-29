@class NSMapTable, NSArray, NSMutableSet, MAAnnotationView, NSMutableArray, NSString;
@protocol MAAnnotationContainerViewDelegate, MAAnnotation;

@interface MAAnnotationContainerView : UIView <MAAnnotationViewDelegate>

@property (retain, nonatomic) NSMutableSet *annotationSet;
@property (retain, nonatomic) NSMutableSet *animatedAnnotationSet;
@property (retain, nonatomic) NSMutableSet *animatingAnnotationSet;
@property (retain, nonatomic) NSMutableArray *glesAnnotationViews;
@property (retain, nonatomic) NSMapTable *annotationAndViewsTable;
@property (weak, nonatomic) id<MAAnnotationContainerViewDelegate> delegate;
@property (readonly, nonatomic) id<MAAnnotation> selectedAnnotation;
@property (readonly, nonatomic) MAAnnotationView *selectedAnnotationView;
@property (readonly, nonatomic) NSArray *annotationArray;
@property (readonly, nonatomic) NSArray *annotationViewArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)annotationViewCalloutViewClicked:(id)a0;
- (BOOL)annotationViewCalloutViewShouldHighlight:(id)a0;
- (double)annotationViewCalloutView:(id)a0 delayForRepositionWithSize:(struct CGSize { double x0; double x1; })a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })annotationViewConvertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateFromView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })annotationViewVisibleRect;
- (struct CGPoint { double x0; double x1; })annotationViewPointForMapPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (double)annotationViewRotateDegree;
- (void)annotationView:(id)a0 didChangeDragState:(long long)a1 fromOldState:(long long)a2;
- (void)annotationView:(id)a0 calloutAccessoryControlTapped:(id)a1;
- (id)getOverlayRendererDelegate;
- (void)bringSelectedAnnotationViewToFront;
- (void)addObserverForAnnotation:(id)a0;
- (BOOL)isAnnotationAnimatable:(id)a0;
- (void)removeObserverForAnnotation:(id)a0;
- (void)onAnnotationNeedsStartAnimation:(id)a0;
- (void)MAAnnotationContainerViewDeallocOperation;
- (unsigned long long)animatedAnnotationCount;
- (unsigned long long)countOfAnnotationArray;
- (unsigned long long)countOfAnnotationViewArray;
- (void)updateAnnotationViewsCenter;
- (void)updateAnnotationViewsCameraDegree;
- (void)addAnnotationView:(id)a0;
- (void)removeAllAnnotationViews;
- (void)sortAnnotationViewsWithView:(id)a0;
- (void)onDrawGLESAnnotations;
- (void)onDrawMetalAnnotations;
- (void).cxx_destruct;
- (void)addAnnotation:(id)a0;
- (BOOL)containsAnnotation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeAnnotation:(id)a0;
- (void)removeAnnotationView:(id)a0;
- (BOOL)deselectAnnotation:(id)a0 animated:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)step:(double)a0;
- (BOOL)selectAnnotation:(id)a0 animated:(BOOL)a1;
- (id)viewForAnnotation:(id)a0;
- (void)removeAllAnnotations;

@end
