@class UIView, NSString, IESGCPCGLayerGroupManager;

@interface IESGCPCGLayerComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLayerRouter, IESGCPCGContainerActions, IESGCPCGInstanceActions, IESGCPCGRotationActions>

@property (retain, nonatomic) IESGCPCGLayerGroupManager *manager;
@property (retain, nonatomic) UIView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (id)layerGroup;
- (void)containerWillAppear;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)containerDidChangeToOrientation:(long long)a0 direction:(unsigned long long)a1;
- (void)containerWillMoveToViewStackInPresent:(BOOL)a0;
- (void)containerWillDismissedInPresent:(BOOL)a0;
- (void)containerDidBindInstance:(id)a0;
- (void)_moveLayerToContainerIfNeeded;
- (id)rootLayerView;
- (void)_setLayerInPreviewMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)currentOrientation;
- (void)setPreviewMode:(BOOL)a0;

@end
