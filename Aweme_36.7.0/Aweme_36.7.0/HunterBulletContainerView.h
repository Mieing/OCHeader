@class NSString, UIView;
@protocol BDXLoadingViewProtocol, BDXViewContainerProtocol;

@interface HunterBulletContainerView : HunterContainerView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dynamicPatchModel;
- (id)createChildView;
- (void)loadWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0;
- (void)updateDataWithModel:(id)a0 processorName:(id)a1;
- (void)setContainerSizeWithWidthMode:(long long)a0 withHeightMode:(long long)a1;
- (void)p_loadDataWithLoadType:(long long)a0 model:(id)a1;
- (void)p_fullLoadWithModel:(id)a0;
- (void)tryUpdateGlobalProps;
- (void)loadSchemaWithParams:(id)a0;
- (void)loadDataUseCacheContainer:(id)a0;
- (void)replaceCacheContainerView;
- (void)loadDataCacheOnShow;
- (BOOL)enableReusePluginUseNewViewModel;
- (void).cxx_destruct;

@end
