@class NSString, NSDictionary, IESECShopActivityDynamicComponentModel, UIView;
@protocol IESHYContainerProtocol, IESECShopFloatLynxContainerDelegate;

@interface IESECShopFloatLynxContainerView : UIView <IESHYHybridViewLifecycleProtocol, LynxViewLifecycle>

@property (retain, nonatomic) IESECShopActivityDynamicComponentModel *model;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (retain, nonatomic) NSDictionary *metaInfo;
@property (weak, nonatomic) id<IESECShopFloatLynxContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)lynxView:(id)a0 onSetup:(id)a1;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)loadLynx;
- (id)initWithModuleComponent:(id)a0 metaInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)__switchToTabType:(long long)a0;
- (BOOL)enableAnnieX;
- (void).cxx_destruct;

@end
