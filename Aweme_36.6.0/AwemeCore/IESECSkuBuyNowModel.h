@class IESECSKUUplinkController, NSDictionary, IESECSKUDataController, IESECBuyNowSKUContext, UIView, IESECSKUScrollToViewInstance;
@protocol IESECSKUViewProtocol, IESECBuyNowSKUDelegate, IESECSKUViewDelegate;

@interface IESECSkuBuyNowModel : NSObject

@property (retain, nonatomic) IESECBuyNowSKUContext *skuContext;
@property (retain, nonatomic) IESECSKUDataController *dataController;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (weak, nonatomic) UIView<IESECSKUViewProtocol, IESECBuyNowSKUDelegate> *skuView;
@property (readonly, weak, nonatomic) id<IESECSKUViewDelegate> skuDelegate;
@property (retain, nonatomic) IESECSKUScrollToViewInstance *anchorInstance;
@property (readonly, nonatomic) IESECSKUUplinkController *yataUplinkController;

- (id)initWithSkuView:(id)a0 skuContext:(id)a1 queryParams:(id)a2;
- (void).cxx_destruct;

@end
