@class NSString;

@interface IESHYRouterIMP : NSObject <IESHYRouterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeTransitionForVC:(id)a0 fromVC:(id)a1 animateOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)p_containerController:(BOOL)a0 useKeyWindow:(BOOL)a1;
- (void)p_addChildViewController:(id)a0 fromVC:(id)a1 targetView:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_presentViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 removePageTag:(id)a3 completion:(id /* block */)a4;
- (void)p_pushViewController:(id)a0 fromVC:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)p_forceUpdateToPortraitIfNeeded;
- (id)p_newContainerController:(BOOL)a0 useKeyWindow:(BOOL)a1;
- (id)useKeyWindowTopVC:(BOOL)a0;

@end
