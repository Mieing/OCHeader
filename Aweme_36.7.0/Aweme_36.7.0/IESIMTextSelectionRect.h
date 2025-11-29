@interface IESIMTextSelectionRect : UITextSelectionRect <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) long long writingDirection;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isVertical;

+ (id)instanceWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containsStart:(BOOL)a1 containsEnd:(BOOL)a2;
+ (id)instanceWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)offsetRectByPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
