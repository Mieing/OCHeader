@class IESECStorePageContext, NSMutableDictionary, UIView;
@protocol IESECStoreContainerProtocol, IESECShopPageContextV2;

@interface IESECStoreTabElementBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabElementDict;
@property (retain, nonatomic) NSMutableDictionary *preloadTabElementDict;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (retain, nonatomic) id<IESECShopPageContextV2> pageContextV2;

- (id)createTabElementWithModel:(id)a0;
- (id)tabElementWithTabType:(unsigned long long)a0 tabClass:(Class)a1;
- (void)preloadHybridContainerWithModel:(id)a0;
- (void)preloadDynamicComponentsWithModel:(id)a0;
- (void)__trackPreloadMatchWithTabModel:(id)a0 status:(id)a1;
- (BOOL)__hasPrehotISVWithTabModel:(id)a0;
- (id)p_createWebTabElementWithModel:(id)a0;
- (id)p_createLynxTabElementWithModel:(id)a0;
- (id)p_createNativeTabElementWithModel:(id)a0;
- (id)p_getWebTabElementWithModel:(id)a0;
- (id)p_createGoodsTabElementWithModel:(id)a0 perfScene:(id)a1;
- (id)p_fallbackCreateTabElementWithModel:(id)a0;
- (id)p_createMomentsTabElementWithModel:(id)a0;
- (id)p_createLiveRoomTabElementWithModel:(id)a0;
- (id)__preloadControllerWithClass:(Class)a0 model:(id)a1;
- (void)__trackPrehotMatchWithTabModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
