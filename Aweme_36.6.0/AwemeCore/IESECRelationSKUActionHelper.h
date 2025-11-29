@class NSString, IESECTracker, IESECBTMModel, UIView, IESECRelationSKUInfo;
@protocol IESECSKUViewProtocol;

@interface IESECRelationSKUActionHelper : NSObject <IESECSKUViewDelegate>

@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (copy, nonatomic) NSString *bcmChain;
@property (retain, nonatomic) IESECRelationSKUInfo *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)buy;
- (void)addToShoppingCartActionWithSKUInfo:(id)a0 completion:(id /* block */)a1;
- (void)showSKUViewWithShowRequest:(id)a0;
- (void)addToCartWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;

@end
