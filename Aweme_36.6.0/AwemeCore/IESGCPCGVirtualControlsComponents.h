@class NSString;

@interface IESGCPCGVirtualControlsComponents : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)handleChannelMessage:(id)a0;
- (void)playInstance:(id)a0 didReceiveRTCCustomMessage:(id)a1;
- (void)onInitFinishedWithResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 info:(id)a3;
- (void)handleGameStateChangedAction:(id)a0;

@end
