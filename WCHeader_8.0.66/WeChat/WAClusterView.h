@class UIButton, NSString, WAMapAnnotationView;
@protocol WAClusterViewDelegate;

@interface WAClusterView : QMUClusterAnnotationView <WAMapAnnotationViewDelegate>

@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) WAMapAnnotationView *markerView;
@property (weak, nonatomic) id<WAClusterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClusterCount:(unsigned long long)a0;
- (void)setClusterMarker:(id)a0;
- (void)onClicked;
- (void)calloutClickAction:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onMapAnnotationViewTap:(id)a0;
- (void)onMapLabelClick:(id)a0;
- (void)onAnnotationZIndexChangeTo:(int)a0;
- (void).cxx_destruct;

@end
