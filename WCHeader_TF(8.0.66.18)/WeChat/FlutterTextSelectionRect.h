@interface FlutterTextSelectionRect : UITextSelectionRect

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) unsigned long long position;
@property (nonatomic) long long writingDirection;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isVertical;

+ (id)selectionRectWithRectAndInfo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1 writingDirection:(long long)a2 containsStart:(BOOL)a3 containsEnd:(BOOL)a4 isVertical:(BOOL)a5;
+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1;
+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1 writingDirection:(long long)a2;

- (id)initWithRectAndInfo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1 writingDirection:(long long)a2 containsStart:(BOOL)a3 containsEnd:(BOOL)a4 isVertical:(BOOL)a5;
- (BOOL)isRTL;

@end
