@class AWEAwemeModel, NSTimer, UIView, UILongPressGestureRecognizer, AWESearchLongPressGuideoEllipseSideView, UITapGestureRecognizer, NSMutableDictionary, NSString, NSMutableArray, LOTAnimationView, UILabel;

@interface AWESearchCardPlayAccelerateManager : NSObject <AWESearchCardPlayAccelerateManagerProtocol>

@property (retain, nonatomic) LOTAnimationView *speedTipsLOTAnimation;
@property (retain, nonatomic) UILabel *adsSpeedTipsLabel;
@property (retain, nonatomic) NSMutableArray *sidePressViewArray;
@property (retain, nonatomic) UIView *guideAnimMaskView;
@property (retain, nonatomic) UIView *guideBackgroundView;
@property (retain, nonatomic) UILabel *guideAnimTipsLabel;
@property (retain, nonatomic) LOTAnimationView *guidePressLOTAnimation;
@property (retain, nonatomic) AWESearchLongPressGuideoEllipseSideView *leftEllipseView;
@property (retain, nonatomic) AWESearchLongPressGuideoEllipseSideView *rightElipseView;
@property (retain, nonatomic) NSTimer *accelrateTipsTimer;
@property (retain, nonatomic) NSTimer *guideGestureTimer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILongPressGestureRecognizer *leftLongPressGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *rightLongPressGesture;
@property (retain, nonatomic) UITapGestureRecognizer *leftTapPressGesture;
@property (retain, nonatomic) UITapGestureRecognizer *rightTapPressGesture;
@property (copy, nonatomic) id /* block */ startLongPressAccelerateBlock;
@property (copy, nonatomic) id /* block */ endLongPressAccelerateBlock;
@property (copy, nonatomic) id /* block */ sideSingleTappdBlock;
@property (retain, nonatomic) NSMutableDictionary *searchParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)syncGetSearchAwemeSpeedUpStyleV2;
+ (long long)speedRateTipsStyle;

- (void)triggerGuideAnimation;
- (void)disableLongPress:(BOOL)a0;
- (void)updateAccelerateSubviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avoidColletion:(id)a1;
- (void)addGuideAnimViewForPlayerView:(id)a0;
- (void)updateGuideAnimWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLongPresSpeedForPlayerView:(id)a0;
- (void)cancelGuideAnimation;
- (BOOL)isSpeedRateTipStyleDefault;
- (void)p_removeLongPressSubviews:(BOOL)a0;
- (long long)speedRateTipsV2Style;
- (BOOL)p_getGuideGestureHasShow;
- (void)p_startPressGuideTimer;
- (void)trackHintShowEvent:(BOOL)a0;
- (void)p_endPressGuideTimer;
- (void)p_setGuideGestureHasShow:(BOOL)a0;
- (void)p_enableAnotherLongPress:(id)a0 enable:(BOOL)a1;
- (void)p_startPlaySpeedtipsAnim;
- (void)p_startAccelerateTimer;
- (void)p_endPlaySpeedtipsAnim;
- (void)p_endAccelerateTimer;
- (void)trackChangeSpeedEvent:(BOOL)a0;
- (void)p_hanleSingleTapGesture:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (void)p_handleLongPressGesture:(id)a0;

@end
