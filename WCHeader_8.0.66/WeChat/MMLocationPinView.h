@class MMUIActivityIndicatorView, UIImageView, ThreeWayExpandImageView, AnnotationSelectContentView, UIView, UILabel;

@interface MMLocationPinView : QAnnotationView {
    AnnotationSelectContentView *m_pinView;
    UIImageView *m_shadowView;
    UIImageView *m_pointView;
    ThreeWayExpandImageView *m_calloutView;
    MMUIActivityIndicatorView *m_loadingView;
    UILabel *m_labelLocation;
    UILabel *m_labelPOIName;
}

@property (nonatomic) BOOL m_bCallOutViewEnable;
@property (readonly, nonatomic) BOOL m_bIsCalloutHidden;
@property (retain, nonatomic) UIView *m_extraContentView;

+ (double)pinViewHeight;

- (void)setUpFrame;
- (void)setDownFrame;
- (void)stopAllAnimation;
- (void)onAnimationFinish;
- (void)doDownAnimation;
- (void)doUpAnimation;
- (void)setLocationText:(id)a0 POIName:(id)a1;
- (void)setLoadingStatus;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePinView;
- (void)showCallOutViewAnimated:(BOOL)a0 Duration:(double)a1;
- (void)hideCallOutViewAnimated:(BOOL)a0 Duration:(double)a1;
- (void)initView;
- (id)init;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)applyPinViewScale:(double)a0;
- (void).cxx_destruct;

@end
