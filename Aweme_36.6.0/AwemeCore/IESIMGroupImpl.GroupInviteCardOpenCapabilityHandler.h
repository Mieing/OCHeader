@interface IESIMGroupImpl.GroupInviteCardOpenCapabilityHandler : IESIMGroupOpenCapabilityHandler

- (void)openViewControllerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)executeWithModel:(id)a0 completion:(id /* block */)a1;
- (void)checkWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithTarget:(id)a0 targetViewController:(Class)a1 model:(Class)a2;
- (void)commonParamCheckResult:(id)a0 model:(id)a1;
- (id)init;

@end
