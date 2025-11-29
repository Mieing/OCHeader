@class WCFinderProgressBarAnchorPointView, UIView, NSArray, NSString, UIPanGestureRecognizer, WCFinderProgressBarConfig, MMUIButton, UIColor;

@interface WCFinderPortraitProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderProgressBarConfig *config;
@property (nonatomic) unsigned long long curType;
@property (copy, nonatomic) NSArray *supportType;
@property (nonatomic) double barHeight;
@property (retain, nonatomic) MMUIButton *dotBtn;
@property (nonatomic) double dotSize;
@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *leftColor;
@property (retain, nonatomic) UIColor *rightColor;
@property (retain, nonatomic) WCFinderProgressBarAnchorPointView *fixedAnchorPointView;
@property (retain, nonatomic) UIView *leftBarView;
@property (retain, nonatomic) UIView *rightBarView;
@property (retain, nonatomic) UIView *midBarView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) double offsetX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)barHeightDictionary;
+ (id)dotSizeDictionary;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)configCurType:(unsigned long long)a0;
- (void)configSupportType:(id)a0;
- (BOOL)isSupportType:(unsigned long long)a0;
- (void)configUI;
- (void)layoutHighlightAnchorPointView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onPanProgressIcon:(id)a0;
- (double)checkPositionX:(double)a0;
- (unsigned long long)getDragState:(long long)a0;
- (BOOL)isInMidBarDraggingState;
- (id)updateTargetAnchorPointValue:(id)a0;
- (id)getConfig;
- (struct CGSize { double x0; double x1; })curAnchorPointSize;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
