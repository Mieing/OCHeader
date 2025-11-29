@class NSString, NSMapTable;

@interface AWEShowAnnieX : NSObject <BDXContainerLifecycleProtocol, AWERouterInterceptorDelegate, AWEShowAnnieXService>

@property (retain, nonatomic) NSMapTable *multiDelegatesByContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (void)collectOpenTimeForAnnieXCard:(id)a0;
- (void)updateInitialData:(id)a0 forAnnieXCard:(id)a1;
- (id)createAnnieXCardWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 useLiveBiz:(BOOL)a2 cardModelBuilder:(id /* block */)a3;
- (void)openContainerWithConfig:(id)a0 contextBuilder:(id /* block */)a1 completion:(id /* block */)a2;
- (id)getSettingForUrlString:(id)a0;
- (id)addClientABJsonForUrlString:(id)a0 settings:(id)a1;
- (void)openContainerWithConfig:(id)a0 longSchema:(id)a1 contextBuilder:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fallBackToRouterOpenSchemaWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)getAnnieXCardSchemaParamsWithConfig:(id)a0;
- (void)updateCardModel:(id)a0 withConfig:(id)a1 cardModelBuilder:(id /* block */)a2;
- (id)createAnnieXCardWithCardModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 useLiveBiz:(BOOL)a2 delegates:(id)a3;
- (id)getCommonSchemaParamsWithConfig:(id)a0;
- (BOOL)supportResourceVersionForSchema:(id)a0 config:(id)a1;
- (id)getContainerSchemaParamsWithConfig:(id)a0;
- (void)openContainerWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)createAnnieXCardWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createAnnieXCardWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 useLiveBiz:(BOOL)a2;
- (void)updateInitialDataWithInfo:(id)a0 forAnnieXCard:(id)a1;
- (void)preloadResource:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
