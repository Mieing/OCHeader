@class NSString, IESGCPCGStandardizedLynxViewConfig, UIView;
@protocol IESHYContainerProtocol;

@interface IESGCPCGSharePictureView : IESGCPCGStandardizedLynxView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol> {
    BOOL ready;
    IESGCPCGStandardizedLynxViewConfig *config;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (nonatomic, getter=islynxLoadSuccess) BOOL lynxLoadSuccess;
@property (nonatomic, getter=isShowing) BOOL showing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
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
