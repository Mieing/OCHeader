@class UIColor;

@interface IESLiveLGameCloseButton : UIButton

@property (nonatomic) struct CGSize { double width; double height; } xSize;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (retain, nonatomic) UIColor *xColor;
@property (retain, nonatomic) UIColor *circleColor;

+ (id)closeButton24BlackWithoutCircle;
+ (id)closeButton28BlackWithoutCircle;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
