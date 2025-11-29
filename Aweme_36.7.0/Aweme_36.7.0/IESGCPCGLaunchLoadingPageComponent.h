@class IESGCPCGLaunchLoadingView, NSString;

@interface IESGCPCGLaunchLoadingPageComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLoadingViewAction>

@property (retain, nonatomic) IESGCPCGLaunchLoadingView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)onRequestLoadingPageResult:(id)a0;
- (void)_preloadLynxView;
- (void)dismissLynxView;
- (void).cxx_destruct;

@end
