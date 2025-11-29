@class NSString, IESGCPXPlayGameDraggableContainer;

@interface IESGCPCGDraggableContainerComponent : IESGCPCGInstanceBaseComponent <IESGCPCGDraggableContainerRouter, IESGCPXPlayGameDraggableContainerDelegate>

@property (retain, nonatomic) IESGCPXPlayGameDraggableContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)hideContainer;
- (void)componentDidAttached;
- (void)showDraggableContainer;
- (void)addDecoration:(id)a0;
- (void)addExclusionDecoration:(id)a0;
- (id)currentMainDecoration;
- (BOOL)containerOnLeftOfScreen;
- (void)changeContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)foldContainerWithWidth:(double)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (void)expandContainer:(double)a0 completion:(id /* block */)a1;
- (id)draggableContianerItemView;
- (void)_initContainer;
- (void)didAutoDismissMainDecoration:(id)a0;
- (void)containerDidClick;
- (void)panBegan;
- (void)panChanged;
- (void)panEnded;
- (void)panEndedDidStickToSide;
- (void).cxx_destruct;

@end
