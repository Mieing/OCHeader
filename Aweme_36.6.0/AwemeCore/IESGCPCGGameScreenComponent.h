@class NSString, IESGCPXPlayGameScreenView;

@interface IESGCPCGGameScreenComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGContainerActions>

@property (retain, nonatomic) IESGCPXPlayGameScreenView *gameScreenView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)componentDidAttached;
- (void)containerWillMoveToViewStackInPresent:(BOOL)a0;
- (void)containerWillDismissedInPresent:(BOOL)a0;
- (void)_removeGameVCFromParentVC;
- (void)_moveGameVCToParentVC;
- (void).cxx_destruct;

@end
