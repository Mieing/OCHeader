@interface LynxCollectionViewLayoutModel : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)modelWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)modelWithHeight:(double)a0;
+ (id)modelWithWidth:(double)a0;
+ (id)modelWithDefaultSize;
+ (double)defaultHeight;
+ (double)defaultWidth;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
