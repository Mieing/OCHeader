@class NSString, IESGCPCGDraggableDefaultLynxView, IESGCPCGDraggableLynxView;

@interface IESGCPCGLynxDraggableComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLynxDraggableRouter, IESGCPCGDraggableContainerActions, IESGCPCGFunctionPanelAction, IESGCPCGDraggableLynxViewDelegate>

@property (retain, nonatomic) IESGCPCGDraggableLynxView *draggable;
@property (retain, nonatomic) IESGCPCGDraggableDefaultLynxView *defaultDraggable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)panBeganWithMainDecoration:(id)a0;
- (void)panChangedWithMainDecoration:(id)a0;
- (void)panEndedWithMainDecoration:(id)a0;
- (void)panEndedDidStickToSideWithMainDecoration:(id)a0;
- (void)showDraggableWithContainerDic:(id)a0;
- (void)changeDragState:(BOOL)a0;
- (void)panelLynxViewShow;
- (void)panelLynxViewDismiss;
- (void)onExpiredMembershipCardDismiss;
- (void)_preloadDraggableLynxView;
- (void)_delayToShowDefaultDraggableIfNeeded;
- (id)_getLynxDraggableSchema;
- (void).cxx_destruct;

@end
