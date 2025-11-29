@class NSString, AWEGrouponHalfCloseMaskAnimationDurationConfig, UIImageView, NSTimer, UIView, AWEGrouponHalfCloseAnimationConfig, AWEGrouponHalfCloseMaskAnimationConfigInfo;

@interface AWEGrouponC2EntranceEducationMaskView : UIView

@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hollowFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topTabFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomTabFrame;
@property (retain, nonatomic) UIImageView *highlightImageView;
@property (retain, nonatomic) NSTimer *autoDismissTimer;
@property (retain, nonatomic) UIView *gradientBorderView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) AWEGrouponHalfCloseAnimationConfig *closeAnimationConfig;
@property (retain, nonatomic) AWEGrouponHalfCloseMaskAnimationConfigInfo *maskAnimationConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanStartFrame;
@property (nonatomic) double radius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) AWEGrouponHalfCloseMaskAnimationDurationConfig *durationConfig;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *clickPosition;
@property (copy, nonatomic) id /* block */ maskDismissedHandler;

- (void)fadeOutAnimation;
- (void)setupAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1 hollowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 topTabFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 bottomTabFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 closeAnimationConfig:(id)a5;
- (void)showEducationMaskView;
- (void)createHollowArea;
- (void)createGradientBorder;
- (void)createBottomImageView;
- (void)createHighlightImageView;
- (void)setupBottomViewLayout;
- (void)updateBottomViewLayoutWithImage:(id)a0;
- (long long)handleEducationPosition;
- (void)resetAutoDismissTimer;
- (void)dismissWithMsg:(id)a0;
- (void)startHighlightAnimation;
- (long long)handleFadeOutStartTimer;
- (long long)handleScanDuration;
- (void)performSecondAnimation;
- (void).cxx_destruct;
- (void)autoDismiss;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (void)setupGestures;

@end
