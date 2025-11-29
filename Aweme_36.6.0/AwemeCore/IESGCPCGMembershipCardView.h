@class NSString, IESGCPCGStandardizedLynxViewConfig, UIView;
@protocol IESHYContainerProtocol, IESGCPCGMembershipCardViewDelegate;

@interface IESGCPCGMembershipCardView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol, IESGCPCGStandardizedLynxView>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<IESGCPCGMembershipCardViewDelegate> delegate;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESGCPCGStandardizedLynxViewConfig *config;
@property (nonatomic, getter=isReady) BOOL ready;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (void)_clearLynxView;
- (void)_setupConstraint;
- (void)loadURL:(id)a0 queryItems:(id)a1;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
