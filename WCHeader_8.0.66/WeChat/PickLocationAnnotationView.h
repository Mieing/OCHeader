@class AnnotationUnSelectContentView, CADisplayLink, AnnotationSelectContentView, UIView, RoundRingView;

@interface PickLocationAnnotationView : QAnnotationView

@property (nonatomic) BOOL isUnSelectContentDisplay;
@property (nonatomic) BOOL isSelectContentDisplay;
@property (nonatomic) BOOL isAnimateViewDisplay;
@property (retain, nonatomic) AnnotationUnSelectContentView *unSelectContentView;
@property (retain, nonatomic) AnnotationSelectContentView *selectContentView;
@property (retain, nonatomic) RoundRingView *roundView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) double lastWidth;
@property (nonatomic) double lastHeight;
@property (retain, nonatomic) CADisplayLink *animateDisplayLink;
@property (nonatomic) long long annotationState;

+ (double)annotationWidth;
+ (double)annotationHeightUnSelect;
+ (double)annotationHeightSelect;

- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateAnimateViews:(BOOL)a0;
- (void)updateUnSelectContent:(BOOL)a0;
- (void)updateSelectContent:(BOOL)a0;
- (void)removeAllAnimations;
- (void)startAnimateFromUnSelectToSelect;
- (void)startAnimateFromSelectToUnSelect;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addDisplayLink;
- (void)removeDisplayLink;
- (void)onUpdateAnimateValue;
- (void).cxx_destruct;

@end
