@class UIView;
@protocol AnnieXContainerBaseProtocol;

@interface AWEProfileAnnieXViewWrapper : AWEProfileHybridContainerBaseWrapper

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXView;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)__configSchemaAddExtraParamsWithSourceSchema:(id)a0;
- (id)getAnnieXLiveCardWithLynxSchema:(id)a0 scrollViewHeight:(double)a1 containerWidth:(double)a2;
- (id)getAnnieXBulletCardWithLynxSchema:(id)a0 scrollViewHeight:(double)a1 containerWidth:(double)a2;
- (void)handleAnnieXCardModelWithModel:(id)a0 lynxSchema:(id)a1 scrollViewHeight:(double)a2 containerWidth:(double)a3;
- (void)configHybridViewWithContainerWidth:(double)a0;
- (id)findScrollViewWithName:(id)a0;
- (void)onThemeChangeNotificationAction:(id)a0;
- (void)hybridLayoutSubviewsWithContainerWidth:(double)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stopLoading;

@end
