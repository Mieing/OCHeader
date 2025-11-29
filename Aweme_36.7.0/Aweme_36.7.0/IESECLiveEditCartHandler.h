@class IESECEventPublisher, IESECLiveContext;

@interface IESECLiveEditCartHandler : NSObject

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECEventPublisher *editCartSuccessEvent;

- (id)businessContext;
- (id)coreParams;
- (id)initWithLiveContext:(id)a0;
- (void)handleNormalAddCart:(id)a0 addCartInfo:(id)a1;
- (id)addFailDefaultToastContent;
- (id)addCartCommonParams:(id)a0 addCartInfo:(id)a1;
- (id)addCartExtraParams:(id)a0 addCartInfo:(id)a1;
- (void)showAddCartAnimationAndToast:(id)a0 addCartInfo:(id)a1 addCartResponse:(id)a2 error:(id)a3;
- (void)editCartWithPath:(id)a0 requestParams:(id)a1 goodsModel:(id)a2 resultTrackInfo:(id)a3 completion:(id /* block */)a4;
- (id)skuBuyToAddAction:(id)a0;
- (id)buyToAddSuccessToastFromAddCartInfo:(id)a0;
- (void)buyToAddCartWithGoodsModel:(id)a0 openGoodsList:(BOOL)a1 addCartInfo:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)openSchemaWithAction:(id)a0;
- (id)addSuccessDefaultToastContent;
- (void)handleStepperAddCart:(id)a0 addCartInfo:(id)a1;
- (void)handleStepperSubCart:(id)a0 subCartInfo:(id)a1;
- (id)tracker;
- (void).cxx_destruct;

@end
