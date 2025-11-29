@class MMTimer, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface WCFinderFullCollectionToolbarItemButton : MMUIButton

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *additionalInfoLabel;
@property (retain, nonatomic) UILabel *rollingTitleLabel;
@property (nonatomic) BOOL itemTitleAnimating;
@property (nonatomic) BOOL rollingAnimationInProgress;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) MMTimer *longPressTimer;
@property (nonatomic) double longPressInterval;
@property (weak, nonatomic) id longPressTarget;
@property (nonatomic) SEL longPressSelector;
@property (copy, nonatomic) id /* block */ longPressBlock;

+ (id)toolbarItemButton;
+ (id)whiteColorWithAlphaComponent;
+ (id)generateStaticIconImage:(id)a0 iconColor:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageView;
- (id)titleLabel;
- (void)setItemImageName:(id)a0 iconColor:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)prepareAdditionalInfoLabel;
- (BOOL)updateAdditionalInfoShowState:(BOOL)a0 animationDuration:(double)a1 complection:(id /* block */)a2;
- (unsigned long long)rollingDirectionForCurrentTitle:(id)a0 newTitle:(id)a1;
- (void)prepareRollingTitleLabel;
- (BOOL)updateTitleWithRollingAnimation:(id)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (void)cancelPendingAction;
- (void)dealloc;
- (void)addLongPressActionWithMinDuration:(double)a0 interval:(double)a1 pressBlock:(id /* block */)a2;
- (void)buttonLongPressAction:(id)a0;
- (void)longPressAction;
- (void).cxx_destruct;

@end
