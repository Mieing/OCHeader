@interface ACCVideoCanvasSource : NSObject <NSCopying, NSCoding>

@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
