@class IESECSKUShowRequest, NSString;
@protocol IESECSKUServiceProtocol, IESECSKUContextProtocol;

@interface IESECSKUSchemaDelegate : NSObject <IESECSKUViewDelegate>

@property (weak, nonatomic) id<IESECSKUServiceProtocol> outerDelegate;
@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (weak, nonatomic) id<IESECSKUContextProtocol> skuContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)confirmClick:(id)a0 skuInfo:(id)a1;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1 completion:(id /* block */)a2;
- (void)selectedSpecsChanged:(id)a0 skuInfo:(id)a1;
- (void)skuNumChanged:(id)a0 skuInfo:(id)a1;
- (BOOL)shouldClosePanelWithCloseType:(long long)a0;
- (void)openSimpleURL:(id)a0 skuInfo:(id)a1;
- (void)skuViewWillShow:(id)a0;
- (void)skuViewDidShow:(id)a0;
- (void)skuViewWillDismiss:(id)a0 closeType:(long long)a1;
- (void)skuViewDidDismiss:(id)a0 closeType:(long long)a1;
- (id)initWithOuterDelegate:(id)a0 showRequest:(id)a1 skuContext:(id)a2;
- (id)p_newTaskManagerWithSKUView:(id)a0 skuInfo:(id)a1 btmModel:(id)a2 extraCallbackParams:(id)a3;
- (void).cxx_destruct;

@end
