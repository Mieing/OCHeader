@class UIFont, NSString, NSTimer, UIView, AWETeenPopoverCoverView, AWETeenPopoverArrow;
@protocol AWETeenPopoverDelegate;

@interface AWETeenPopover : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWETeenPopoverCoverView *coverView;
@property (retain, nonatomic) AWETeenPopoverArrow *arrowView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) double arrowWidth;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double titleSideSpacing;
@property (nonatomic) double titleTopBottomSpacing;
@property (nonatomic) double titleHeight;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (weak, nonatomic) id<AWETeenPopoverDelegate> delegate;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) double autoDismissTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 withCover:(BOOL)a1;
- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (struct CGSize { double x0; double x1; })sizeWithText:(id)a0 font:(id)a1 maxWidth:(double)a2;
- (id)initWithTitle:(id)a0 targetPoint:(struct CGPoint { double x0; double x1; })a1 limitMaxWidth:(double)a2;
- (double)textMaxWidth:(double)a0;
- (void)setupCoverOnView:(id)a0;
- (void)setupSelfAttributes;
- (double)popoverMaxWidth;
- (void)resetArrowPosition;
- (id)initWithTitle:(id)a0 targetPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hide;
- (void)setupContentView;

@end
