@class NSMutableDictionary, NSDictionary, UILayoutGuide, NSLayoutConstraint, NSMutableArray, NSArray;

@interface AFDButton : UIButton

@property (retain, nonatomic) NSDictionary *afd_shootSchoolStoryTrackInfo;
@property (retain, nonatomic) NSMutableDictionary *stateOptions;
@property (nonatomic) BOOL isPerformingAnimation;
@property (retain, nonatomic) NSMutableArray *animationQueue;
@property (nonatomic) long long impactFeedbackStyle;
@property (nonatomic) BOOL canSendActions;
@property (nonatomic) BOOL isImageSizeSpecified;
@property (nonatomic) BOOL isTitleSizeSpecified;
@property (nonatomic) BOOL hasSetUpConstraints;
@property (retain, nonatomic) UILayoutGuide *containerLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *containerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paddingConstraint;
@property (retain, nonatomic) NSArray *positionConstraints;
@property (nonatomic) BOOL enableContinuousStateAnimation;
@property (nonatomic) double paddingBetweenImageAndTitle;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) double clickInterval;
@property (nonatomic) long long imagePosition;

- (void)removeImpactFeedback;
- (void)p_updateConstraints;
- (void)p_setupConstraints;
- (id)p_createOptionsForState:(unsigned long long)a0;
- (void)p_generateImpactFeedback:(id)a0;
- (id)p_optionsForState:(unsigned long long)a0;
- (void)p_doStateAnimationWithOptions:(id)a0;
- (void)setTitleAlpha:(double)a0 forState:(unsigned long long)a1;
- (void)setStateAnimationDuration:(double)a0 forState:(unsigned long long)a1;
- (void)setStateAnimationDelay:(double)a0 forState:(unsigned long long)a1;
- (void)setStateAnimationCurve:(long long)a0 forState:(unsigned long long)a1;
- (void)addImpactFeedbackOfStyle:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (void)setAlpha:(double)a0 forState:(unsigned long long)a1;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;

@end
