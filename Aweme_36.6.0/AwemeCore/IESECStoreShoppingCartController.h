@class IESECShopCartView, NSString, IESECServiceProxy;
@protocol IESECShopDataService;

@interface IESECStoreShoppingCartController : IESECRelationController <IESECShopCartViewDelegate, IESECStoreShoppingCartControllerProtocol> {
    BOOL _isNotFirst;
    BOOL _initCart;
    long long _cartStatus;
}

@property (retain, nonatomic) IESECShopCartView *shoppingCartView;
@property (copy, nonatomic) NSString *shoppingCartURL;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (void)setupBinding;
- (id)cartView;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)controllerDidLoad;
- (void)didTapShoppingCartView;
- (void)productAddCartAnimationPlay;
- (void)updateCartStatus;
- (void)didShowShoppingCartView;
- (void)updateCartStorage:(id)a0;
- (double)p_getShoppingCartBottomOffset:(id)a0;
- (void)p_showShoppingCartViewIfNeeded:(id)a0;
- (void)showCartAnimated;
- (id)getCartStatusStr;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)setup;
- (void)setupUI;

@end
