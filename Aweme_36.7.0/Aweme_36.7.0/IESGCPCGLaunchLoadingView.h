@class NSString, IESGCPCGStandardizedLynxViewConfig, UIView;
@protocol IESHYContainerProtocol;

@interface IESGCPCGLaunchLoadingView : IESGCPCGStandardizedLynxView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol> {
    BOOL ready;
    IESGCPCGStandardizedLynxViewConfig *config;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isLynxLoadFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (void)_clearLynxView;
- (void)_setupConstraint;
- (void)loadURL:(id)a0 queryItems:(id)a1;
- (void)setConfig:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setReady:(BOOL)a0;

@end
