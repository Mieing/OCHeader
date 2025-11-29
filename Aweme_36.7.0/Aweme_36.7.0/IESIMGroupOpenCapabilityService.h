@interface IESIMGroupOpenCapabilityService : NSObject <IESIMGroupOpenCapabilityNativeService, IESIMGroupOpenCapabilityRouterService>

- (void)executePreCheckWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canOpenViewControllerWithModel:(id)a0;
- (void)openViewControllerWithModel:(id)a0 invokeChannel:(long long)a1 completion:(id /* block */)a2;
- (void)runWithModel:(id)a0 invokeChannel:(long long)a1 completion:(id /* block */)a2;
- (void)executePreCheckWithParams:(id)a0 completion:(id /* block */)a1;
- (void)openViewControllerWithRouterParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)canOpenViewControllerWithParams:(id)a0;
- (id)migrationCoverWithRouterParams:(id)a0;
- (void)trackGroupOpenCapabilityInvokeEvent:(id)a0 invokeChannel:(long long)a1 bizLine:(long long)a2 bizScene:(id)a3 result:(long long)a4 ext:(id)a5;
- (id)init;

@end
