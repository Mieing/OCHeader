@interface IESLiveUpdateLivePanelEffectMethodImpl : IESLiveUpdateLivePanelEffectMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isCurrentUserInBigPartyOpenCamera;
- (void)applyInteractEffect:(id)a0 isApplied:(BOOL)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)applyEffect:(id)a0 isApplied:(BOOL)a1 isAnchor:(BOOL)a2 completion:(id /* block */)a3;
- (id)createItemWith:(id)a0 extra:(id)a1;

@end
