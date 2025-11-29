@class NSTimer, UIView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString, NSDictionary, AWESearchTripleSpeedLongPressGuideEllipseSideView, LOTAnimationView, UILabel;

@interface AWESearchTripleSpeedView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *leftHotAera;
@property (retain, nonatomic) UILongPressGestureRecognizer *leftHotAeraLongPressGesture;
@property (retain, nonatomic) UIView *rightHotAera;
@property (retain, nonatomic) UILongPressGestureRecognizer *rightHotAeraLongPressGesture;
@property (retain, nonatomic) UITapGestureRecognizer *leftHotAeraTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *rightHotAeraTapGesture;
@property (retain, nonatomic) LOTAnimationView *speedTipsLOTAnimation;
@property (retain, nonatomic) LOTAnimationView *guidePressLOTAnimation;
@property (retain, nonatomic) UILabel *guideAnimTipsLabel;
@property (retain, nonatomic) AWESearchTripleSpeedLongPressGuideEllipseSideView *leftEllipseView;
@property (retain, nonatomic) AWESearchTripleSpeedLongPressGuideEllipseSideView *rightElipseView;
@property (retain, nonatomic) NSTimer *guideGestureTimer;
@property (retain, nonatomic) NSTimer *accelrateTipsTimer;
@property (retain, nonatomic) UIView *guideAnimMaskView;
@property (retain, nonatomic) UIView *guideBackgroundView;
@property (copy, nonatomic) id /* block */ startLongPressBlock;
@property (copy, nonatomic) id /* block */ endLongPressBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ playStatusBlock;
@property (copy, nonatomic) NSDictionary *logData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showGuide;
- (void)hideGuide;
- (void)trackSearchResultShowEvent;
- (void)cancelGuideAnimation;
- (void)p_startPressGuideTimer;
- (void)trackHintShowEvent:(BOOL)a0;
- (void)p_endPressGuideTimer;
- (void)p_startPlaySpeedtipsAnim;
- (void)p_startAccelerateTimer;
- (void)p_endAccelerateTimer;
- (void)trackChangeSpeedEvent:(BOOL)a0;
- (void)enableAnotherLongPressWithCurrentGesture:(id)a0 enable:(BOOL)a1;
- (void)p_endPlaySpeedtipsAnimWithNeedTrack:(BOOL)a0;
- (void)speedTapAction:(id)a0;
- (void)tripleSpeedLongPressAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
