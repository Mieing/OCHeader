@class UIView, NSString, AFDPureModePageFastForwardFlashingArrowView, UIImageView, CAShapeLayer, MASConstraint, UILabel, AWEFeedDownLockFlashingArrowView;

@interface AFDFastSpeedView : UIView <CAAnimationDelegate, AFDFastSpeedViewProtocol>

@property (retain, nonatomic) CAShapeLayer *leftMaskLayer;
@property (retain, nonatomic) CAShapeLayer *rightMaskLayer;
@property (retain, nonatomic) AFDPureModePageFastForwardFlashingArrowView *bottomArrowView;
@property (retain, nonatomic) UIImageView *speedImageView;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIView *bottomBackGroundView;
@property (retain, nonatomic) MASConstraint *backGroundViewWidthAllWrappedUp;
@property (retain, nonatomic) MASConstraint *backGroundViewWidthWrapTextOnly;
@property (retain, nonatomic) MASConstraint *backGroundViewHeightAllWrappedUp;
@property (retain, nonatomic) MASConstraint *backGroundViewHeightWrapTextOnly;
@property (retain, nonatomic) UILabel *bottomTextView;
@property (retain, nonatomic) UILabel *drageToPureModeTextView;
@property (retain, nonatomic) UILabel *bottomSpeedTextView;
@property (retain, nonatomic) MASConstraint *bottomTextViewYTop;
@property (retain, nonatomic) MASConstraint *bottomTextViewYMiddle;
@property (retain, nonatomic) MASConstraint *bottomTextViewXRight;
@property (retain, nonatomic) MASConstraint *bottomTextViewXMiddle;
@property (retain, nonatomic) AWEFeedDownLockFlashingArrowView *downLockArrowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (void)layoutSubviews;
- (id)aAWEPadModuleAdapter;
- (void)showViewWithoutBottomAnimation:(id)a0 onView:(id)a1 type:(long long)a2;
- (void)updateSpeedImageViewHidden:(BOOL)a0 tips:(id)a1;
- (void)setBottomDownLockArrowViewHidden:(BOOL)a0;
- (void)updateSpeedLockBottomWithText:(id)a0 Type:(long long)a1;
- (BOOL)ifDragIntoHotArea:(id)a0;
- (void)configReferString:(id)a0 enterFrom:(id)a1;
- (void)showAndPlayAnimationOnView:(id)a0 speed:(double)a1 type:(long long)a2;
- (id)aAWEPlayInteractionAdapter;
- (id)createLeftMaskLayer;
- (id)createRightMaskLayer;
- (void)playFadeInAndOutAnimationWithType:(unsigned long long)a0;
- (void)addViewAndTriggerHaptic:(id)a0;
- (void)updateUIIfFastSpeed:(BOOL)a0 shouldDragEnterPureMode:(BOOL)a1 text:(id)a2;
- (void)updateLayerUI;
- (id)animationArray:(unsigned long long)a0 type:(unsigned long long)a1;
- (id)animationGroupAnimations:(id)a0;
- (id)positionAni:(unsigned long long)a0 type:(unsigned long long)a1;
- (id)opacityAniWithType:(unsigned long long)a0;
- (double)maskLayerWidth;
- (double)maskLayerHeight;
- (void)updateSpeedImageViewWithSpeed:(double)a0;
- (double)speedIconWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
