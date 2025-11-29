@class NSDictionary;

@interface AnnieLiveBizRouter : NSObject

@property (nonatomic) double animationDuration;
@property (copy, nonatomic) NSDictionary *routerParams;

- (id)p_getQueryItems:(id)a0;
- (void)makeTransitionForSchema:(id)a0 controller:(id)a1 fromVC:(id)a2 context:(id)a3 completion:(id /* block */)a4 error:(id *)a5;
- (unsigned long long)_transitionOptionsWithSchema:(id)a0;
- (id)getQueryItemsWithSchema:(id)a0;
- (void)_addChildViewController:(id)a0 fromVC:(id)a1 targetView:(id)a2 animated:(BOOL)a3 context:(id)a4 completion:(id /* block */)a5;
- (void)showContainer:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)_presentViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)p_postWillShowNotificaion:(BOOL)a0 container:(id)a1;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 context:(id)a3 removePageTag:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
