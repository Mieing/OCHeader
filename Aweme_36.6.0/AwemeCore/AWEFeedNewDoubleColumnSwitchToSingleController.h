@class NSString, UIImageView, UIVisualEffectView, UIView, UILabel;

@interface AWEFeedNewDoubleColumnSwitchToSingleController : AWEDCFeedBaseController <AWEDCFeedSwitchToSingleProtocol>

@property (nonatomic) BOOL withinShrinkBackToSingleColumnRegion;
@property (retain, nonatomic) UIView *backToSingleColumnContainerView;
@property (retain, nonatomic) UIView *littleBackToSingleColumnContainerView;
@property (retain, nonatomic) UIImageView *backToSingleColumnIcon;
@property (retain, nonatomic) UIImageView *littleBackToSingleColumnIcon;
@property (retain, nonatomic) UIVisualEffectView *backToSingleColumnContainerEffectView;
@property (retain, nonatomic) UIVisualEffectView *littleBackToSingleColumnContainerEffectView;
@property (retain, nonatomic) UILabel *backToSingleColumnLabel;
@property (nonatomic) BOOL hasShowBackToSingleColumnFirstAppearAnimation;
@property (nonatomic) long long backButtonState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originLargeSwitchFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)littleBackToSingleWidth;
+ (double)backToSingleHeight;
+ (double)backToSingleIconWidth;
+ (double)littleBackToSingleIconWidth;
+ (double)backToSingleLabelFont;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)themeReload;
- (void)hideSwitchToSingleView:(BOOL)a0;
- (double)awe_tabBarTopBoundY;
- (double)awe_shrinkTranslationX;
- (void)didChangeRotate:(id)a0;
- (void)awe_realAppearInMiddleBackToSingleColumnView;
- (void)awe_backToSingleColumnContainerViewShrinkToRight;
- (void)awe_backToSingleColumnContainerViewExpandToMiddle;
- (void)awe_cancelPreviousAnimationFinalSelectors;
- (id)backToSingleColumnIconImage;
- (double)awe_shrinkDuration;
- (void)awe_addBackToSingleColumnContainerShrinkAnimation;
- (void)awe_addLittleBackToSingleColumnContainerShrinkAnimation;
- (void)awe_realShrinkToRightBackToSingleColumnView;
- (void)awe_addBackToSingleColumnContainerExpandAnimation;
- (void)awe_addLittleBackToSingleColumnContainerExpandAnimation;
- (double)awe_backToSingleColumnWidth;
- (void)awe_addBackToSingleColumnContainerAppearAnimation;
- (void)awe_addBackToSingleColumnIconAppearAnimation;
- (void)awe_addBackToSingleColumnLabelAppearAnimation;
- (void)awe_realPrepareAppearBackToSingleColumnView;
- (void)backToSingleColumn:(id)a0;
- (void)awe_backToSingleColumnContainerViewAppear;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (void)containerViewDidLayoutSubviews;
- (void)setupUI;
- (void)containerViewDidLoad;

@end
