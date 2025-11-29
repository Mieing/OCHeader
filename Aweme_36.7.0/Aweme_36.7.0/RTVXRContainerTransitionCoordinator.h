@class RTVXRContainerTransitionModel;

@interface RTVXRContainerTransitionCoordinator : NSObject

@property (retain, nonatomic) RTVXRContainerTransitionModel *pendingTranstion;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ transitionBlock;

- (void)executeTransition:(id)a0;
- (id)initWithTransitionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAnimated:(BOOL)a0;

@end
