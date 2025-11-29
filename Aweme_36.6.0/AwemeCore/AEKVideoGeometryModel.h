@interface AEKVideoGeometryModel : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) BOOL mirrorX;
@property (nonatomic) BOOL mirrorY;
@property (nonatomic) struct AEKGeometryClipCorner { struct CGPoint { double x; double y; } leftTop; struct CGPoint { double x; double y; } rightTop; struct CGPoint { double x; double y; } leftBottom; struct CGPoint { double x; double y; } rightBottom; } corner;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
