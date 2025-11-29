@class NSRecursiveLock;

@interface MAQuadTree2 : NSObject {
    struct MAQuadTreeNode { struct MAQuadTreeNode *x0; struct MAQuadTreeNode *x1; struct MAQuadTreeNode *x2; struct MAQuadTreeNode *x3; struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; } x4; int x5; struct MAQuadTreeNodeData *x6; int x7; int x8; } *_rootNode;
    NSRecursiveLock *_lock;
}

@property (readonly, nonatomic) struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; } boundingBox;

- (void)initializeWithBoundingBox:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0;
- (id)annotationsInBoundingBox:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0 limitArea:(double)a1;
- (id)annotationsInBoundingBox:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)addAnnotations:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithBoundingBox:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0;
- (void)clean;

@end
