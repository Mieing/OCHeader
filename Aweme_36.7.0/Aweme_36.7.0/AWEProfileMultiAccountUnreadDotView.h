@class UILabel;

@interface AWEProfileMultiAccountUnreadDotView : UIButton

@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) long long count;
@property (nonatomic) double kHeight;
@property (nonatomic) double kHorizontalPadding;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;

+ (id)defaultDotColor;
+ (id)defaultDotTextColor;
+ (void)setDefaultDotColor:(id)a0;
+ (void)setDefaultDotTextColor:(id)a0;
+ (void)initialize;

- (void)_appear;
- (long long)countOfShowingNum;
- (void)setDotTextColor:(id)a0;
- (void)_disappear;
- (id)initWithStyle:(unsigned long long)a0 scaleRate:(double)a1;
- (void).cxx_destruct;
- (void)setLabelHidden:(BOOL)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)updateWithCount:(long long)a0;
- (void)setDotColor:(id)a0;
- (void)updateWithText:(id)a0;

@end
