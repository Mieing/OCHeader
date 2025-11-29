@class TBCalloutBackgroundView, NSString, UILabel, UIView, UIButton;
@protocol QAnnotationViewCollisionDelegate, TBCalloutViewDelegate;

@interface TBCalloutView : UIView <CAAnimationDelegate, QAnnotationViewCollisionDelegate>

@property (retain, nonatomic) UIButton *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) unsigned long long currentArrowDirection;
@property (nonatomic) BOOL popupCancelled;
@property (nonatomic) unsigned long long collisionType;
@property (weak, nonatomic) UIView<QAnnotationViewCollisionDelegate> *parent;
@property (weak, nonatomic) id<TBCalloutViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIView *leftAccessoryView;
@property (retain, nonatomic) UIView *rightAccessoryView;
@property (nonatomic) unsigned long long permittedArrowDirection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } constrainedInsets;
@property (retain, nonatomic) TBCalloutBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *subtitleView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentViewInset;
@property (nonatomic) struct CGPoint { double x; double y; } calloutOffset;
@property (nonatomic) long long presentAnimation;
@property (nonatomic) long long dismissAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformCalloutView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsHighlighting;
- (void)highlightIfNecessary;
- (void)unhighlightIfNecessary;
- (void)calloutClicked;
- (id)titleViewOrDefault;
- (id)subtitleViewOrDefault;
- (id)defaultBackgroundView;
- (void)rebuildSubviews;
- (double)leftAccessoryVerticalMargin;
- (double)leftAccessoryHorizontalMargin;
- (double)rightAccessoryVerticalMargin;
- (double)rightAccessoryHorizontalMargin;
- (double)innerContentMarginLeft;
- (double)innerContentMarginRight;
- (double)calloutHeight;
- (double)calloutContainerHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })offsetToContainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 constrainedToView:(id)a2 animated:(BOOL)a3;
- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayer:(id)a1 constrainedToLayer:(id)a2 animated:(BOOL)a3;
- (void)presentCalloutFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayer:(id)a1 ofView:(id)a2 constrainedToLayer:(id)a3 animated:(BOOL)a4;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dismissCalloutAnimated:(BOOL)a0;
- (void)removeFromParent;
- (id)animationWithType:(long long)a0 presenting:(BOOL)a1;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
