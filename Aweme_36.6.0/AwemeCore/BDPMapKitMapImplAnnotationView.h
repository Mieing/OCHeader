@class BDPMapKitMapPointAnnotation, UIImageView, BDPMapKitMapLabelView, NSString, BDPMapKitMapCalloutView;
@protocol BDPMapKitAnnotationViewCallbackProtocol;

@interface BDPMapKitMapImplAnnotationView : MKAnnotationView <BDPMapKitMapCalloutViewDelegate, BDPMapKitMapLabelViewDelegate>

@property (retain, nonatomic) BDPMapKitMapPointAnnotation *mapPointAnnotation;
@property (weak, nonatomic) id<BDPMapKitAnnotationViewCallbackProtocol> delegate;
@property (nonatomic) BOOL markerSelected;
@property (weak, nonatomic) UIImageView *defaultMarkerShadowImageView;
@property (weak, nonatomic) BDPMapKitMapCalloutView *calloutView;
@property (weak, nonatomic) BDPMapKitMapLabelView *labelView;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGPoint { double x; double y; } calloutAnchorOffset;
@property (nonatomic) struct CGPoint { double x; double y; } labelAnchorOffset;
@property (nonatomic) struct CGPoint { double x; double y; } markerRotateOffset;
@property (readonly, nonatomic) double realMarkerWidth;
@property (readonly, nonatomic) double realMarkerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)tapGestureAction:(id)a0;
- (void)mapImplCalloutViewDidClicked:(id)a0;
- (void)adjustMarkerIsSelected:(id)a0;
- (BOOL)p_isAlwaysShowCallout;
- (void)p_resetProperty;
- (void)mapImplLabelViewDidClicked:(id)a0;
- (id)initWithMapPointAnnotation:(id)a0 reuseIdentifier:(id)a1 delegate:(id)a2;
- (void)updateStyleWithMapPointAnnotation:(id)a0 image:(id)a1 isDefault:(BOOL)a2;
- (double)realMarkerWidth;
- (double)realMarkerHeight;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)rotateByRadians:(double)a0;

@end
