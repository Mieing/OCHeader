@class UIImageView, IESECReviewsDetailProgressSliderConfiguration, UIView, UIPanGestureRecognizer;

@interface IESECReviewsDetailProgressSlider : UIControl {
    UIView *_minimumTrackView;
    UIView *_maximumTrackView;
    UIImageView *_thumbImageView;
    UIPanGestureRecognizer *_panGesture;
    IESECReviewsDetailProgressSliderConfiguration *_normalConfiguration;
    IESECReviewsDetailProgressSliderConfiguration *_activatedConfiguration;
}

@property (nonatomic) double value;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } responseAreaInsets;

+ (id)sliderWithConfigurationForNormal:(id)a0 configurationForActivated:(id)a1;

- (id)initWithConfigurationForNormal:(id)a0 configurationForActivated:(id)a1;
- (void).cxx_destruct;
- (void)handleGesture:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
