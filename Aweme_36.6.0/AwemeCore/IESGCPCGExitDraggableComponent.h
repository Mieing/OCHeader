@class NSString, IESGCPCGDraggableExitView;

@interface IESGCPCGExitDraggableComponent : IESGCPCGInstanceBaseComponent <IESGCPCGDraggableExitRouter, IESGCPCGDraggableContainerActions>

@property (retain, nonatomic) IESGCPCGDraggableExitView *foldExitView;
@property (retain, nonatomic) IESGCPCGDraggableExitView *unfoldExitView;
@property (nonatomic) BOOL showExitDraggable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)onDraggableContainerReady;
- (void)didAutoDismissMainDecoration:(id)a0;
- (void)showExitDraggableView;
- (void).cxx_destruct;

@end
