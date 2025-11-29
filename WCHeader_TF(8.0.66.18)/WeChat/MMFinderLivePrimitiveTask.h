@class MMFinderLivePrimitiveParam;

@interface MMFinderLivePrimitiveTask : MMFinderLiveTask

@property (retain, nonatomic) MMFinderLivePrimitiveParam *primitiveParam;

- (void)updatePrimitiveParam:(id)a0;
- (id)createLiveViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 andDelegate:(id)a2;
- (void).cxx_destruct;

@end
