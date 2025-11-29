@class MMRollableLabelViewConfig, UIView, NSString, PAGView, UIImageView, CAGradientLayer, UILabel, UIScrollView;

@interface MMRollableLabelView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) MMRollableLabelViewConfig *config;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContainerView;
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutScrollViewSize;
@property (retain, nonatomic) PAGView *pagAnimationView;
@property (nonatomic) BOOL hasStartAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateLabelText:(id)a0;
- (void)updateLabelAttributedText:(id)a0;
- (void)updateLabelTextColor:(id)a0;
- (void)updateIconImage:(id)a0;
- (void)updatePAGAnimationPath:(id)a0;
- (void)playPAGAnimation;
- (void)stopPAGAnimation;
- (void)updateConfig:(id)a0;
- (BOOL)startAnimation;
- (void)resetAnimation;
- (void)resetRollAnimation;
- (BOOL)rescheduleRollAnimation;
- (BOOL)scheduleScrollingAnimation;
- (BOOL)scheduleBackAndForthAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setupUI;
- (id)buildGradientLayer;
- (void)createPAGViewIfNeeded;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })getImageViewSize;
- (struct CGSize { double x0; double x1; })getPagViewSize;
- (double)getIconTextPadding;
- (struct CGSize { double x0; double x1; })getLabelSize;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
