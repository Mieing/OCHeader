@interface IESGCPRuntimeAlertComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions>

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstanceDidReceiveExitRequest:(id)a0;
- (void)_showRuntimeExceptionWithTitle:(id)a0 desc:(id)a1 errCode:(long long)a2 canRestart:(BOOL)a3 exitTitle:(id)a4;
- (void)_handleGameForceStopWithInfo:(id)a0;
- (void)_showQuitAlert;
- (void)_showNoActionOfflineAlert;

@end
