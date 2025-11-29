@interface ICBatchFetchingContext : NSObject

@property (nonatomic) BOOL isFetching;

- (BOOL)shouldFetchBatch:(id)a0 leadingScreens:(double)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2 velocity:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)shouldFetchBatch:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentSize:(struct CGSize { double x0; double x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 adjustContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 leadingScreens:(double)a5 visible:(BOOL)a6 velocity:(struct CGPoint { double x0; double x1; })a7;
- (void)beginBatchFetching;
- (void)completeBatchFetching:(BOOL)a0;

@end
