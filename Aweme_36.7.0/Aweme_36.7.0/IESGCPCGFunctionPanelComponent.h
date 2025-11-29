@class IESGCPXPlayGamePanelLynxView, BDXBridgeEventSubscriber, NSString;

@interface IESGCPCGFunctionPanelComponent : IESGCPCGInstanceBaseComponent <IESGCPCGFunctionPanelRouter, IESGCPCGLaunchProcessActions, IESGCPCGRotationActions>

@property (retain, nonatomic) IESGCPXPlayGamePanelLynxView *panelView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *toastSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *hasLoadedXplayPanelSubscriber;
@property (nonatomic) BOOL hasLoadedXplayPanel;
@property (copy, nonatomic) id /* block */ welfareSwitchTabBlock;
@property (copy, nonatomic) id /* block */ notifyLynxPanelInitFinishedBlock;
@property (readonly, nonatomic) BOOL isPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (void)componentDestroy;
- (void)showPanel;
- (void)sendLynxEvent:(id)a0 params:(id)a1;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (void)componentDidAttached;
- (void)_unRegisterShowToastEventSubscriber;
- (void)containerDidChangeToOrientation:(long long)a0 direction:(unsigned long long)a1;
- (void)updateSmallWindowState;
- (void)switchToTargetTab:(id)a0 withAction:(id /* block */)a1;
- (void)_preloadFunctionPanelContent;
- (void)_unRegisterXplayLoadEventSubscriber;
- (void)_notifyLynxPanelInitFinished:(BOOL)a0 params:(id)a1;
- (id)_functionLynxPanelQueryItems;
- (void)_registerShowToastEventSubscriber;
- (void)_registerXplayLoadEventSubscriber;
- (void).cxx_destruct;

@end
