@class UIFont, UIColor, UIView, NSMutableArray;

@interface MMLiveScrollNumView : UIView

@property (nonatomic) unsigned long long numberSize;
@property (nonatomic) double splitSpaceWidth;
@property (nonatomic) double topAndBottomPadding;
@property (nonatomic) unsigned long long numberValue;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *digitBackgroundView;
@property (retain, nonatomic) UIFont *digitFont;
@property (retain, nonatomic) NSMutableArray *numberViews;
@property (nonatomic) unsigned long long randomLength;
@property (retain, nonatomic) UIColor *digitColor;

+ (unsigned long long)digitFromNum:(unsigned long long)a0 withIndex:(unsigned long long)a1;
+ (unsigned long long)sizeFromNum:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)initScrollNumView;
- (void)setNumber:(unsigned long long)a0 withDigitFont:(id)a1 withAnimationType:(int)a2 animationTime:(double)a3;
- (unsigned long long)digitIndex:(unsigned long long)a0;
- (void)didConfigFinish;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
