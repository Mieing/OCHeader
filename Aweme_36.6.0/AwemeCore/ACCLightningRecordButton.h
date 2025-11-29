@class RACSubject, ACCLightningRecordLivePhotoRingView, ACCLightningRecordLightGrayBackgroundView, ACCLightningRecordLongtailView, ACCLightningRecordRingView, ACCLightningRecordBlurView, NSMutableArray, ACCLightningRecordReplaceBlurView, UIView, ACCLightningRecordLivePhotoWhiteProgressView, NSString, ACCLightningRecordWhiteView, ACCLightningRecordRedView, NSNumber, ACCRecordMode, UIImageView;

@interface ACCLightningRecordButton : UIView <CAAnimationDelegate, ACCLightningRecordAnimatable, AWEVideoProgressViewProtocol, AWEVideoProgressReshootProtocol, ACCLightningRecordButtonProtocol>

@property (retain, nonatomic) NSMutableArray *animatables;
@property (retain, nonatomic) ACCLightningRecordLightGrayBackgroundView *lightGrayView;
@property (retain, nonatomic) ACCLightningRecordBlurView *blurView;
@property (retain, nonatomic) ACCLightningRecordReplaceBlurView *replaceBlurView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) ACCLightningRecordWhiteView *whiteView;
@property (retain, nonatomic) UIImageView *lightningView;
@property (retain, nonatomic) ACCLightningRecordLongtailView *longtailView;
@property (nonatomic) float progress;
@property (nonatomic) BOOL mainRecorder;
@property (nonatomic) BOOL isKeepLivephotoStyle;
@property (retain, nonatomic) ACCLightningRecordRingView *ringView;
@property (retain, nonatomic) ACCLightningRecordLivePhotoRingView *livephotoRingView;
@property (retain, nonatomic) ACCLightningRecordRedView *redView;
@property (readonly, nonatomic) ACCLightningRecordLivePhotoWhiteProgressView *livephotoWhiteProgressView;
@property (nonatomic) BOOL showLightningView;
@property (nonatomic) BOOL reshootMode;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) double maxDuration;
@property (weak, nonatomic) RACSubject *switchModelSubject;
@property (nonatomic) BOOL enableFlowControlAB;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (retain, nonatomic) NSNumber *longtailShootAnimationDurationCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long state;

- (double)internalScaleValue;
- (void)setProgress:(float)a0 duration:(double)a1 animated:(BOOL)a2;
- (id)p_videoIconImage;
- (void)p_setReshootTimeFrom:(float)a0 to:(float)a1;
- (void)updateViewWithTimeSegments:(id)a0 totalTime:(double)a1;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(BOOL)a0 standardDuration:(double)a1 maxDuration:(double)a2;
- (void)copyStateToAnotherButton:(id)a0;
- (void)setReshootTimeFrom:(double)a0 to:(double)a1 totalDuration:(double)a2;
- (BOOL)p_longtailShootAnimationEnabled;
- (double)p_longtailShootAnimationDurationCycle;
- (void)mainRecorderPageEnter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceDegradation:(BOOL)a1;
- (void)resetDotColor;
- (void)updateLightningView;
- (void)updateInnerViewWithState:(long long)a0;
- (void)updateRecordButtonRingStyle:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
