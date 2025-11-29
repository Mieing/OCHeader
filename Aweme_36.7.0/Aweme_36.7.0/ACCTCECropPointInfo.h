@interface ACCTCECropPointInfo : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } upperLeft;
@property (nonatomic) struct CGPoint { double x; double y; } upperRight;
@property (nonatomic) struct CGPoint { double x; double y; } lowerLeft;
@property (nonatomic) struct CGPoint { double x; double y; } lowerRight;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
