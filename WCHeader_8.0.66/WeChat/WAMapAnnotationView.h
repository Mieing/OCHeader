@class UIImageView, WAMapMarker, NSDictionary, WAMapCalloutView, UIView, PaddingLabel, UIButton;
@protocol WAMapAnnotationViewDelegate;

@interface WAMapAnnotationView : QAnnotationView

@property (retain, nonatomic) NSDictionary *calloutParam;
@property (retain, nonatomic) UIView *calloutCoverView;
@property (weak, nonatomic) id calloutTarget;
@property (nonatomic) SEL calloutAction;
@property (nonatomic) unsigned long long calloutControlEvents;
@property (retain, nonatomic) WAMapCalloutView *calloutView;
@property (nonatomic) BOOL isCalloutViewShow;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } calloutTrans;
@property (retain, nonatomic) PaddingLabel *paddingLabel;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIButton *tapButton;
@property (retain, nonatomic) UIImageView *markerImage;
@property (retain, nonatomic) WAMapMarker *marker;
@property (nonatomic) BOOL fixedCallout;
@property (weak, nonatomic) id<WAMapAnnotationViewDelegate> delegate;

- (id)initWithMarker:(id)a0 reuseIdentifier:(id)a1;
- (void)initWithMarker:(id)a0;
- (void)initPointView;
- (void)buildMarkerContent;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setZIndex:(int)a0;
- (void)initMarkerImage;
- (void)updateMarkerLayout;
- (void)updateMarkerRotate;
- (void)updateCalloutLayout;
- (void)initCallout;
- (void)addCalloutTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)addCalloutView;
- (void)removeCalloutView;
- (void)tryToGetCalloutViewIfNeed;
- (void)updateCalloutView;
- (void)initLabel;
- (void)onClicked;
- (void)onCalloutClicked;
- (void)onMapLabelClick:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
