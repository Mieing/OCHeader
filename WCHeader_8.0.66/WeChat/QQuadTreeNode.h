@class NSMutableArray;

@interface QQuadTreeNode : NSObject

@property (retain, nonatomic) QQuadTreeNode *northWest;
@property (retain, nonatomic) QQuadTreeNode *northEast;
@property (retain, nonatomic) QQuadTreeNode *southWest;
@property (retain, nonatomic) QQuadTreeNode *southEast;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) unsigned long long bucketCapacity;
@property (retain, nonatomic) NSMutableArray *nodeDatas;

+ (id)nodeWithCapacity:(unsigned long long)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)subdivide;
- (BOOL)insertData:(id)a0;
- (void)traverseUsingBlock:(id /* block */)a0;
- (void)enumerateDataInRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (id)dataInRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCapacity:(unsigned long long)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)description;
- (void).cxx_destruct;

@end
