@class NSString, AMapSMCalloutBackgroundView, UILabel, UIView, UIButton;
@protocol AMapSMCalloutViewDelegate;

@interface AMapSMCalloutView : UIView

@property (retain, nonatomic) UIButton *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) unsigned long long currentArrowDirection;
@property (nonatomic) BOOL popupCancelled;
@property (weak, nonatomic) id<AMapSMCalloutViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIView *leftAccessoryView;
@property (retain, nonatomic) UIView *rightAccessoryView;
@property (nonatomic) unsigned long long permittedArrowDirection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } constrainedInsets;
@property (retain, nonatomic) AMapSMCalloutBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *subtitleView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGPoint { double x; double y; } calloutOffset;
@property (nonatomic) double cameraOffsetY;
@property (nonatomic) long long presentAnimation;
@property (nonatomic) long long dismissAnimation;

+ (id)platformCalloutView;

- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 constrainedToView:(id)a2 animated:(BOOL)a3;
- (void)dismissCalloutAnimated:(BOOL)a0;
- (void)highlightIfNecessary;
- (void)unhighlightIfNecessary;
- (void)calloutClicked;
- (id)defaultBackgroundView;
- (id)titleViewOrDefault;
- (id)subtitleViewOrDefault;
- (double)calloutContainerHeight;
- (double)leftAccessoryVerticalMargin;
- (double)rightAccessoryVerticalMargin;
- (double)leftAccessoryHorizontalMargin;
- (double)rightAccessoryHorizontalMargin;
- (double)innerContentMarginLeft;
- (double)innerContentMarginRight;
- (double)calloutHeight;
- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayer:(id)a1 ofView:(id)a2 constrainedToLayer:(id)a3 animated:(BOOL)a4;
- (void)rebuildSubviews;
- (struct CGSize { double x0; double x1; })offsetToContainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)animationWithType:(long long)a0 presenting:(BOOL)a1;
- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayer:(id)a1 constrainedToLayer:(id)a2 animated:(BOOL)a3;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)removeFromParent;
- (BOOL)supportsHighlighting;

@end
