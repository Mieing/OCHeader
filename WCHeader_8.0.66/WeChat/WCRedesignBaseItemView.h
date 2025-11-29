@class MMUILabel, NSString, UIView, WCRedesignBaseItem, MMUIButton;

@interface WCRedesignBaseItemView : UIView

@property (weak, nonatomic) WCRedesignBaseItem *item;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned int separators;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (nonatomic) BOOL disableDefaultAccessibility;

+ (double)standardHeight;
+ (id)generateSeparator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldBreakLineForMaxTitleWidth:(double)a0;
- (unsigned long long)numberOfLinesForWidth:(double)a0;
- (BOOL)isBreakLine;
- (void)onTapBackground;
- (void).cxx_destruct;

@end
