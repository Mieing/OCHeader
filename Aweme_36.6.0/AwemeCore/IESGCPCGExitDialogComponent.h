@class NSString, IESGCXPlayGameExitDialogLynxView;

@interface IESGCPCGExitDialogComponent : IESGCPCGInstanceBaseComponent <IESGCPCGExitDialogRouter>

@property (retain, nonatomic) IESGCXPlayGameExitDialogLynxView *exitDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)exitXPlayWithSourcePage:(id)a0;
- (void)showFeedbackViewWithExtra:(id)a0;
- (void)showExitDialog;
- (void)dismissExitDialog;
- (void)_preloadExitDialog;
- (BOOL)_isPlayTheSameGame;
- (BOOL)_isTeamPlay;
- (void)_sendExitXPlayMessageWithExtra:(id)a0;
- (void).cxx_destruct;

@end
