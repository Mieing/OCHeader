@class NSDate, NSString, UIImageView, UILabel, UIView, CALayer;

@interface AWEProfilePostJustWatchedView : UIView <AWEProfileJustWatchedViewProtocol>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (nonatomic) double scale;
@property (nonatomic) BOOL shouldReverseTheme;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL pointingUp;
@property (nonatomic) BOOL hasTrackedPosition;
@property (nonatomic) BOOL hasLocateRequest;
@property (retain, nonatomic) NSDate *clickedStartDate;
@property (retain, nonatomic) NSDate *positionStartDate;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasTrackedAnchorShown;
@property (nonatomic) double bottomSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadingAnimation;
- (void)updateWithShouldReverseTheme:(BOOL)a0;
- (void)setPointingUpAnimated:(BOOL)a0 animated:(BOOL)a1;
- (void)updateJustWatchedViewTitle:(id)a0;
- (id)paramsOfTrackPositionDuration;
- (void)resetAnimationIfNeeded;
- (void)onThemeDidChange:(id)a0;
- (double)animationOffset;
- (void)applicationWillEnterForeground:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)dealloc;
- (void)show;
- (void)setupSubviews;
- (void)showAnimated:(BOOL)a0;
- (void)handleTapGestureRecognizer:(id)a0;

@end
