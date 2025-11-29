@interface MMLockLine : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } fromPoint;
@property (nonatomic) struct CGPoint { double x; double y; } toPoint;
@property (nonatomic) BOOL isFullPath;

- (id)initWithFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 AndIsFullPath:(BOOL)a2;

@end
