@class NSString, IESECShopGoodsAddToCartTrackingParams, IESECShopGoodsModel, UIView, IESECShopCardPackProductModel, UIViewController;
@protocol IESECSKUViewProtocol, IESECStoreShoppingCartControllerProtocol;

@interface IESECShopGoodsAddToCartHandler : NSObject <IESECSKUViewDelegate> {
    IESECShopGoodsModel *_currentGoodsModel;
    IESECShopCardPackProductModel *_currentCardPackProduct;
    NSString *_currentBcmChain;
}

@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (copy, nonatomic) id /* block */ addToCartCompletionBlock;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) IESECShopGoodsAddToCartTrackingParams *trackingParams;
@property (copy, nonatomic) NSString *btm;
@property (weak, nonatomic) id<IESECStoreShoppingCartControllerProtocol> cartController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)handleButtonClickWithRelationModel:(id)a0 image:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3 atIndex:(long long)a4;
- (void)handleButtonClickWithShopCardPackProduct:(id)a0 image:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3 atIndex:(long long)a4;
- (void)addCartAnimationWithImage:(id)a0 toast:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toPoint:(struct CGPoint { double x0; double x1; })a3;
- (void)addToShoppingCartActionWithSKUInfo:(id)a0 completion:(id /* block */)a1;
- (void)showSKUView;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
