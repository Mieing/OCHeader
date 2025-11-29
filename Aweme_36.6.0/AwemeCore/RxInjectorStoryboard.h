@protocol RxInjector;

@interface RxInjectorStoryboard : UIStoryboard

@property (readonly, weak, nonatomic) id<RxInjector> injector;

+ (id)storyboardWithName:(id)a0 bundle:(id)a1 injector:(id)a2;

- (id)crossstoryboardsegues_storyboardWithName:(id)a0 bundle:(id)a1;
- (void)performWithSwizzledFactoryMethod:(id /* block */)a0;
- (void)injectController:(id)a0;
- (void)injectViewController:(id)a0;
- (id)initWithInjecotorStoryboardWithName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)instantiateViewControllerWithIdentifier:(id)a0;

@end
