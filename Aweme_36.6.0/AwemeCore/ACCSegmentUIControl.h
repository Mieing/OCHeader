@class ACCSegmentSlideView, NSArray, UIColor, UIFont, UIView, NSMutableArray;

@interface ACCSegmentUIControl : UIControl

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *onTopLabels;
@property (retain, nonatomic) NSArray *tabNameList;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (copy, nonatomic) id /* block */ willBePressedHandlerBlock;
@property (copy, nonatomic) id /* block */ canAcceptHandlerTapBlock;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) ACCSegmentSlideView *sliderView;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *sliderColor;
@property (retain, nonatomic) UIColor *labelTextColorInsideSlider;
@property (retain, nonatomic) UIColor *labelTextColorOutsideSlider;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double sliderOffset;
@property (nonatomic) BOOL continuousSlidingMode;

+ (id)switchWithStringsArray:(id)a0 supportThemeSkin:(BOOL)a1;
+ (id)switchWithStringsArray:(id)a0;

- (void)selectIndex:(long long)a0 animated:(BOOL)a1;
- (void)setCanAcceptHandlerTapHandler:(id /* block */)a0;
- (void)setPressedHandler:(id /* block */)a0;
- (id)initWithStringsArray:(id)a0 supportThemeSkin:(BOOL)a1;
- (id)createBackLabelView:(long long)a0 content:(id)a1 font:(id)a2;
- (void)handleRecognizerTap:(id)a0;
- (id)createFrontLabelView:(id)a0 font:(id)a1;
- (void)slideHandler:(id)a0;
- (BOOL)isFixXcode26Status;
- (void)animateChangeToIndex:(unsigned long long)a0 callHandler:(BOOL)a1;
- (void)changeToIndexWithoutAnimation:(unsigned long long)a0 callHandler:(BOOL)a1;
- (void)updateFrontLabelView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTheBlockAtIndex:(long long)a0;
- (void)continuousSlider:(id)a0;
- (void)discreteSlider:(id)a0;
- (void)forceSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)moveToSuitablePlace;
- (id)initWithStringsArray:(id)a0;
- (void)setWillBePressedHandler:(id /* block */)a0;
- (void)setLabelTextColorInsideSlider:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isDark;
- (void)layoutSubviews;

@end
