@class NSMutableIndexSet;

@interface RxRTree : NSObject {
    NSMutableIndexSet *_allIndexes;
    struct shared_ptr<boost::geometry::index::rtree<std::pair<Rx::RTree::Frame, unsigned long>, boost::geometry::index::linear<64>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _root;
}

- (id)indexesForFramesIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__frameForIndex:(long long)a0;
- (void).cxx_destruct;
- (id)visualDescription;
- (id)init;
- (id).cxx_construct;
- (void)insertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndex:(unsigned long long)a1;
- (void)enumerateFramesWithBlock:(id /* block */)a0;
- (id)allIndexes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingFrame;

@end
