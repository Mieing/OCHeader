@class NSString, IESGCPCGLynxToastView;

@interface IESGCPCGLynxToastComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLynxToastRouter>

@property (retain, nonatomic) IESGCPCGLynxToastView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBindingProtocols;
- (void)componentDidAttached;
- (void)showLynxToastViewWithWidth:(long long)a0 Height:(long long)a1 duration:(long long)a2;
- (void)dismissLynxToastView;
- (void)_preloadLynxToastView;
- (void).cxx_destruct;

@end
