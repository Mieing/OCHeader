@class IESECGoodsDetailBottomView, NSString, IESECGoodsDetailParameters, IESECGoodsDetailTracker;
@protocol IESECGoodsDetailBottomViewProviderDelegate;

@interface IESECGoodsDetailBottomViewProvider : NSObject <IESECGoodsDetailViewUpdateMessage, IESECommerceAddGoodsToCartMessage>

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsDetailBottomView *bottomNewView;
@property (nonatomic) unsigned long long starItemIndex;
@property (nonatomic) unsigned long long cartItemIndex;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (nonatomic) unsigned long long addCartStyle;
@property (weak, nonatomic) id<IESECGoodsDetailBottomViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBottomView;
- (void)renderFinished;
- (id)initWithParameters:(id)a0 tracker:(id)a1;
- (void)acceptShoppingCartNumberChanged:(id)a0;
- (void)acceptShoppingCartNumberChanged:(id)a0 style:(unsigned long long)a1;
- (void)acceptShoppingCartNumberChanged:(id)a0 pageIdentifier:(id)a1;
- (void)acceptShoppingCartNumberChanged:(id)a0 style:(unsigned long long)a1 pageIdentifier:(id)a2;
- (void)goodsDetailBottomViewNeedUpdatedWithGoodsDetailUID:(id)a0;
- (id)createBottomTipsView;
- (void).cxx_destruct;
- (void)dealloc;

@end
