@class UILabel, UIView;

@interface WCEditImageBubbleView : UIView

@property (weak, nonatomic) UIView *targetView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) BOOL arrowAtBottom;

+ (void)showGuideWithTargetView:(id)a0 text:(id)a1;
+ (void)dismiss;

- (id)initWithTargetView:(id)a0 text:(id)a1;
- (void)drawBubbleWithCornerRadius:(double)a0 arrowHeight:(double)a1;
- (void).cxx_destruct;

@end
