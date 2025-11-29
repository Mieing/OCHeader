@class NSString, UIView;
@protocol IESECSKUViewProtocol;

@interface IESECLiveSKUManager : NSObject <IESECSKUViewDelegate, UIGestureRecognizerDelegate, IESLiveEcommerceSKUInterface>

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;

- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)confirmClick:(id)a0 skuInfo:(id)a1;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)detailClick:(id)a0 skuInfo:(id)a1;
- (void)openCouponPanel:(id)a0 skuInfo:(id)a1;
- (void)openSimpleURL:(id)a0 skuInfo:(id)a1;
- (void)openSKUFromCart:(id)a0 callback:(id /* block */)a1;
- (void)skuInfoToCart:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
