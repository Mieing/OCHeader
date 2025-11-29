@interface TransformTextureVertices : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (nonatomic) struct CGPoint { double x; double y; } topRight;
@property (nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (nonatomic) unsigned long long clapRotation;

- (BOOL)isValid;
- (id)init;
- (id)initWithDict:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
