@class NSString, IESGCPCGLynxGenericAlertInterceptor;

@interface IESGCPCGLynxGenericAlertComponent : IESGCPCGInstanceBaseComponent <IESGCPCGStandardizedLynxActions, IESGCPCGContainerActions, IESGCPCGLynxGenericAlertRouter, IESGCPCGLaunchProcessActions>

@property (retain, nonatomic) NSString *cgLynxID;
@property (retain, nonatomic) NSString *externalLynxID;
@property (nonatomic) long long lynxViewExternalState;
@property (nonatomic) long long lynxViewCGState;
@property (retain, nonatomic) IESGCPCGLynxGenericAlertInterceptor *responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)containerWillAppear;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)onInitFinishedWithResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 info:(id)a3;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void)preloadLynxExternalGenericAlertIfNeeded;
- (void)showLynxAlertWithTitle:(id)a0 description:(id)a1 actionTitle:(id)a2 cancelTitle:(id)a3 actionBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)onStandardizedLynxView:(id)a0 loadFinished:(BOOL)a1 error:(id)a2;
- (void)preloadLynxCGGenericAlertIfNeeded;
- (BOOL)_isShouldFallbackState;
- (void)_showFallBackLaunchFailWithTitle:(id)a0 desc:(id)a1 errCode:(long long)a2 canRestart:(BOOL)a3 exitTitle:(id)a4;
- (void)_showRuntimeExceptionWithTitle:(id)a0 desc:(id)a1 errCode:(long long)a2 canRestart:(BOOL)a3 exitTitle:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
