@class UIButton;
@protocol AWESearchSlidingTabbarViewDelegate;

@interface AWESearchSlidingTabbarView : AWESlidingTabbarView

@property (nonatomic) double extraWidth;
@property (retain, nonatomic) UIButton *aiSearchLogoBtn;
@property (copy, nonatomic) id /* block */ bottonTouchDownBlock;
@property (copy, nonatomic) id /* block */ bottonTouchCancelBlock;
@property (weak, nonatomic) id<AWESearchSlidingTabbarViewDelegate> tabbarViewDelegate;

- (void)configureButtonTextFont:(id)a0 selectedFont:(id)a1;
- (void)resetDataArray:(id)a0 selectedDataArray:(id)a1;
- (void)updateThemeStyle:(unsigned long long)a0;
- (void)onButtonAccessibilityFocus:(id)a0;
- (double)totalButtonWidth;
- (void)setupSystem;
- (void)setupTabButtonTouchDownAndCancelEvent;
- (void)setupAiSearchButton;
- (BOOL)isShowAiSearchBtn;
- (double)aiSearchBtnScale;
- (void)setupAiSearchImage:(BOOL)a0;
- (void)tabButtonTouchDown:(id)a0;
- (void)tabButtonTouchCancel:(id)a0;
- (void)aiSearchBtnClick;
- (void)addFilterViewAccesibilityElement:(id)a0;
- (void)removeFilterViewAccesibilityElement;
- (void)configIconThemeWithoutAnimationWithImage:(id)a0 selectedImage:(id)a1 index:(long long)a2;
- (void)updateCenteredIconWithoutAnimationWithImage:(id)a0 selectedImage:(id)a1 index:(long long)a2 offsetX:(double)a3;
- (void)setExtraWidthForFilterView:(double)a0 animated:(BOOL)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
