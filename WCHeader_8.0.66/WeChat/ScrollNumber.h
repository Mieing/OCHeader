@class UIFont, UIColor, UIView, NSMutableArray;

@interface ScrollNumber : UIView

@property (retain) NSMutableArray *numberArray;
@property unsigned long long currentNumber;
@property (retain) UIView *container;
@property (retain) UIView *clipView;
@property BOOL bIsFontChange;
@property (retain, nonatomic) UIFont *font;
@property (retain) UIColor *color;
@property unsigned int dotPos;
@property double animationTime;
@property (nonatomic) BOOL isYogaRightAlignment;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })singleNumberSize;
- (struct CGSize { double x0; double x1; })unitSize;
- (struct CGSize { double x0; double x1; })dotSize;
- (void)updateContainer;
- (void)updateClipView;
- (void)defaultNumber:(unsigned long long)a0;
- (void)updateNumber:(unsigned long long)a0;
- (id)viewFromStart:(unsigned long long)a0 end:(unsigned long long)a1;
- (id)viewFromRStart:(unsigned long long)a0 end:(unsigned long long)a1;
- (int)bitOfNumber:(unsigned long long)a0;
- (id)arrayFromMin:(unsigned long long)a0;
- (id)mixCurrentArray:(id)a0 diffArray:(id)a1;
- (id)mixMinCurrentArray:(id)a0 diffArray:(id)a1;
- (id)noChangeArray:(id)a0;
- (void)updateLastNumberFrame:(id)a0 numberCount:(unsigned long long)a1 target:(id)a2;
- (void)updateTarget:(id)a0 numberCount:(unsigned long long)a1;
- (double)widthOfNumber:(unsigned long long)a0;
- (id)reverseArray:(id)a0;
- (double)offsetXOfDot:(id)a0;
- (double)currentOffsetXOfDot:(id)a0;
- (struct CGSize { double x0; double x1; })scrollNumberSize;
- (double)widthOfNumbers:(id)a0;
- (unsigned long long)getNumber;
- (void).cxx_destruct;

@end
