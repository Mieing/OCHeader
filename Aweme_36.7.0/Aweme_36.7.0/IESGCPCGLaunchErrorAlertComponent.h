@class NSString;

@interface IESGCPCGLaunchErrorAlertComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLaunchProcessActions, IESGCPCGInstanceActions, IESGCPCGLaunchErrorAlertRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)_trackAbnormalStatisticsEvent:(long long)a0;
- (void)showAntiAddictionAlertWithTitle:(id)a0 desc:(id)a1;
- (BOOL)shouldForceDisplay;
- (void)_showLaunchFailWithTitle:(id)a0 desc:(id)a1 errCode:(long long)a2 canRestart:(BOOL)a3 exitTitle:(id)a4;
- (void)_handleLoadPlayItemFailWithStopServingErrorMessage:(id)a0;
- (void)_showAccountMigrationAlert;
- (BOOL)_isLaunchFromPreview;
- (id)alert;

@end
