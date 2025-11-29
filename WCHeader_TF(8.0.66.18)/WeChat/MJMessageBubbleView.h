@class UIColor, UIFont, NSString, MMUILabel;

@interface MJMessageBubbleView : MMUIView

@property (retain, nonatomic) MMUILabel *label;
@property (nonatomic) double bubbleTailHeight;
@property (nonatomic) double bubbleCornerRadius;
@property (retain, nonatomic) UIColor *bubbleBackgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setbubbleCornerRadius:(double)a0;
- (void).cxx_destruct;

@end
