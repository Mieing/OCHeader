@class ICBatchFetchingContext;
@protocol ICFlowBatchFetchingDelegate;

@interface ICFlowTableView : UITableView

@property (retain, nonatomic) ICBatchFetchingContext *batchFetchingContext;
@property (weak, nonatomic) id<ICFlowBatchFetchingDelegate> batchFetchingDelegate;
@property (nonatomic) double leadingScreensForBatching;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)didMoveToWindow;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)checkForBatchFetching;
- (void)beginBatchFetchingIfNeeded:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_beginBatchFetching;
- (void)stopBatchFetching;
- (void).cxx_destruct;

@end
