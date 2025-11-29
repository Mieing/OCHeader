@class UIViewController, NSString, UIView, IESGCPCGStandardizedLynxViewConfig, IESGCPCGStandardizedLynxErrorView;
@protocol IESGCPCGStandardizedLynxViewDelegate, IESHYContainerProtocol;

@interface IESGCPCGStandardizedLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGStandardizedLynxErrorViewDelegate, IESGCPCGLayerItemViewProtocol, IESGCPCGStandardizedLynxView>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) IESGCPCGStandardizedLynxErrorView *errorView;
@property (weak, nonatomic) id<IESGCPCGStandardizedLynxViewDelegate> delegate;
@property (weak, nonatomic) UIViewController *showContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESGCPCGStandardizedLynxViewConfig *config;
@property (nonatomic, getter=isReady) BOOL ready;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (void)showErrorPage;
- (void)dismissErrorPage;
- (void)_setupConstraint;
- (void)loadURL:(id)a0 queryItems:(id)a1;
- (void)applyLayoutParams:(id)a0;
- (void)onPageCloseClicked;
- (void)onRetryButtonClicked;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;

@end
