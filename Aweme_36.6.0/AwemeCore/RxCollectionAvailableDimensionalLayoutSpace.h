@interface RxCollectionAvailableDimensionalLayoutSpace : NSObject

@property (readonly, nonatomic) int axis;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 axis:(int)a1;

@end
