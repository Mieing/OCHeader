@class UIFont, UIColor, UIView, NSMutableArray;
@protocol IZCWScrollNumViewDelegate;

@interface ZCWScrollNumView : UIView

@property (nonatomic) unsigned long long numberSize;
@property (nonatomic) double splitSpaceWidth;
@property (nonatomic) double topAndBottomPadding;
@property (readonly, nonatomic) unsigned long long numberValue;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *digitBackgroundView;
@property (retain, nonatomic) UIFont *digitFont;
@property (readonly, nonatomic) NSMutableArray *numberViews;
@property (retain, nonatomic) UIColor *digitColor;
@property (nonatomic) unsigned long long randomLength;
@property (nonatomic) long long dotPos;
@property (retain, nonatomic) UIView *dotView;
@property (nonatomic) double dotWidth;
@property (nonatomic) BOOL isDotViewTransparent;
@property (nonatomic) BOOL isNeedShowMaskView;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<IZCWScrollNumViewDelegate> delegate;

+ (unsigned long long)digitFromNum:(unsigned long long)a0 withIndex:(unsigned long long)a1;
+ (id)dotImageWithColor:(id)a0 width:(double)a1 height:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)initScrollNumView;
- (double)getBaseLine;
- (void)setNumber:(unsigned long long)a0 withAnimationType:(int)a1 animationTime:(double)a2 stopTimeStep:(double)a3;
- (void)animationDidStop;
- (unsigned long long)digitIndex:(unsigned long long)a0;
- (id)getDefaultDotView;
- (void)didConfigFinish;
- (void).cxx_destruct;

@end
