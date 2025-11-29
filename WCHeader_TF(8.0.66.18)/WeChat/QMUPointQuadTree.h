@class NSMutableArray;

@interface QMUPointQuadTree : NSObject

@property (nonatomic) int depth;
@property (nonatomic) struct { double minX; double minY; double maxX; double maxY; } bounds;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSMutableArray *items;

- (id)initWithBounds:(struct { double x0; double x1; double x2; double x3; })a0;
- (id)initWithBounds:(struct { double x0; double x1; double x2; double x3; })a0 depth:(int)a1;
- (id)queryWithBounds:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)queryInternal:(id)a0 bounds:(struct { double x0; double x1; double x2; double x3; })a1;
- (void)insert:(id)a0;
- (void)insert:(struct { double x0; double x1; })a0 item:(id)a1;
- (void)remove:(id)a0;
- (void)remove:(struct { double x0; double x1; })a0 item:(id)a1;
- (void)split;
- (void).cxx_destruct;

@end
