@class UIColor;

@interface WCDrawLineView : UIView

@property (nonatomic) long long lineStyle;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double paddingStart;
@property (nonatomic) double paddingEnd;
@property (nonatomic) BOOL isBottomLine;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
