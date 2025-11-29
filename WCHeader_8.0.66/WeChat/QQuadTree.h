@class QQuadTreeNode;

@interface QQuadTree : NSObject

@property (retain, nonatomic) QQuadTreeNode *root;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) unsigned long long bucketCapacity;

+ (id)treeWithDatas:(id)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 capacity:(unsigned long long)a2;
+ (id)treeWithDatas:(id)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)treeWithDatas:(id)a0;

- (BOOL)insertData:(id)a0;
- (void)enumerateDataInRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)traverseUsingBlock:(id /* block */)a0;
- (id)dataInRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDatas:(id)a0 capacity:(unsigned long long)a1 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;

@end
