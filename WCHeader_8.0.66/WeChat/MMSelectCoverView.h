@class UIColor;

@interface MMSelectCoverView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftCursorRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightCursorRect;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *cursorColor;
@property (nonatomic) double leftLineLength;
@property (nonatomic) double topLineLength;
@property (nonatomic) double rightLineLength;
@property (nonatomic) double bottomLineLength;
@property (nonatomic) double dotRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isTouchInLeftCursor:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isTouchInRightCursor:(struct CGPoint { double x0; double x1; })a0;
- (double)farLeft;
- (double)farRight;
- (double)farTop;
- (double)farBottom;
- (void).cxx_destruct;

@end
