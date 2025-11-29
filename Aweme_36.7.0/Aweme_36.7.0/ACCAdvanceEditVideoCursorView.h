@class UIColor, UIView;

@interface ACCAdvanceEditVideoCursorView : UIView

@property (retain, nonatomic) UIView *cursor;
@property (retain, nonatomic) UIView *shadow;
@property (retain, nonatomic) UIColor *cursorColor;
@property (nonatomic) unsigned long long nearEdgeType;

- (void)resetShadow;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
