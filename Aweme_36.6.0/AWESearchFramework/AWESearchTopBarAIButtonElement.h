@class UIImageView, UILabel, NSString;

@interface AWESearchTopBarAIButtonElement : AWESearchTopBarBaseElement <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *bwIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL selected;
@property (nonatomic) long long currentPosition;
@property (nonatomic) long long currentUIThemeStyle;
@property (nonatomic) BOOL isGuideShowing;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (double)iconViewWidth;
- (void)resetToBlackWhiteMode;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostDidExecuteSearch;
- (void)hostMiddlePageDidShowWithInteractionType:(long long)a0;
- (void)hostResultPageDidShow;
- (void)hostSugPageDidShowWithModeStyle:(long long)a0 position:(long long)a1;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)topbarUIStyleDidChange:(long long)a0;
- (void)searchModeDidChange:(long long)a0;
- (double)elementWidthWithText:(id)a0;
- (BOOL)hasExecuteSearchInAIMode;
- (BOOL)isFirstEnterMiddlePage;
- (BOOL)isValidOfFrequencyControl;
- (void)showAIModeGuide;
- (void)dismissAIModeGuideWithForce:(BOOL)a0;
- (void)updateAIModeGuideAnimationNextShowDate;
- (void)addGradientLayerWithAnimation:(BOOL)a0;
- (void)removeGradientAnimating;
- (void)updateElementAppearanceWithAnimation:(BOOL)a0;
- (void)trackAIButtonEventName:(id)a0 position:(long long)a1;
- (void)animateIconIfNeeded;
- (void)addRotationAnimationLayer:(id)a0 toAngle:(double)a1 fromOpacity:(double)a2 toOpacity:(double)a3;
- (void)showAIModeGuideAnimationIfNeed;
- (void).cxx_destruct;
- (void)updateCurrentState;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })elementSize;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (void)tapAction;
- (void)addBorderWithColor:(id)a0;

@end
