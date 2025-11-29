@class UINavigationController;
@protocol AFDMomentDetailComponentContainer;

@interface AFDMomentDetailBaseComponent : AFDMomentBaseComponent

@property (weak, nonatomic) UINavigationController<AFDMomentDetailComponentContainer> *container;

- (void)bindObserver;
- (void)loadComponent;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)componentDidAppear:(BOOL)a0;
- (void)componentDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)willShowViewController:(id)a0 animated:(BOOL)a1;

@end
