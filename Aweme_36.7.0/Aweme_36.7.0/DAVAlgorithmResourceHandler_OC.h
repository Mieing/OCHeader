@interface DAVAlgorithmResourceHandler_OC : DAVResourceHandler_OC

@property (nonatomic) struct shared_ptr<davinci::algorithm::AlgorithmResourceHandler> { struct AlgorithmResourceHandler *x0; struct __shared_weak_count *x1; } internalHandler;

- (BOOL)canHandleWithResource:(id)a0;
- (id)initWithHandler:(struct shared_ptr<davinci::algorithm::AlgorithmResourceHandler> { struct AlgorithmResourceHandler *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithConfig:(id)a0;

@end
