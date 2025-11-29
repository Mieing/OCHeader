@interface IESIMGroupImpl.GroupManagementOpenCapabilityHandler : IESIMGroupOpenCapabilityHandler

- (BOOL)canOpenViewControllerWithModel:(id)a0;
- (void)openViewControllerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)executeWithModel:(id)a0 completion:(id /* block */)a1;
- (void)checkWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithTarget:(id)a0 targetViewController:(Class)a1 model:(Class)a2;
- (id)init;

@end
