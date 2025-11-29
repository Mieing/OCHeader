@class ScrollNumber, UILabel, MMUIActivityIndicatorView;

@interface TimeoutNumber : UIView

@property (retain) ScrollNumber *scrollNumber;
@property (retain) MMUIActivityIndicatorView *indicatorView;
@property BOOL timeout;
@property (retain) UILabel *unitLabel;
@property BOOL grayIndicator;
@property double indicatorViewMargin;
@property long long indicatorAlign;
@property long long textAlign;
@property double delay;
@property unsigned long long noAnimationStart;
@property double noAnimationDelay;
@property (nonatomic) BOOL isYogaRightAlignment;

- (void)noAnimationDelay:(double)a0;
- (struct CGSize { double x0; double x1; })singleNumberSize;
- (struct CGSize { double x0; double x1; })dotSize;
- (struct CGSize { double x0; double x1; })unitSize;
- (void)updateTextAlignment:(long long)a0;
- (void)updateIndicatorMargin:(double)a0;
- (void)updateIndicatorAlign:(long long)a0;
- (void)useGrayIndicator:(BOOL)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateUnit:(id)a0;
- (void)startTimeout:(double)a0;
- (void)stopTimeout;
- (void)layoutSubviews;
- (void)updateUnitLabel;
- (void)updateScrollNumber;
- (void)updateActivity;
- (void)adjustIndicator;
- (void)updateFont:(id)a0;
- (void)updateColor:(id)a0;
- (void)updateDotPos:(unsigned int)a0;
- (void)updateAnimationTime:(double)a0;
- (void)updateAnimationDelay:(double)a0;
- (void)updateNumberInternal:(unsigned long long)a0;
- (void)updateNumber:(unsigned long long)a0;
- (unsigned long long)numWidth:(unsigned long long)a0;
- (void)defaultNumber:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })scrollNumberSize;
- (double)animationTime;
- (id)unit;
- (id)getAccessibilityLabelString;
- (void).cxx_destruct;

@end
