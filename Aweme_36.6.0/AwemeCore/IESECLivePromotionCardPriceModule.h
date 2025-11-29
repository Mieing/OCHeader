@class IESECLiveStackContainerView, IESECInsetsLabel, NSMutableString, IESECLiveGoodsPriceCountDown, NSString, NSMutableArray, IESECLivePriceLabel;
@protocol IESECLiveItemTimerProtocol;

@interface IESECLivePromotionCardPriceModule : IESECLivePromotionCardCommonModule <IESECLivePromotionCardCommonModulePriceUpdateProvider>

@property (retain, nonatomic) IESECLiveStackContainerView *priceStackView;
@property (retain, nonatomic) IESECLivePriceLabel *priceLabel;
@property (retain, nonatomic) IESECLivePriceLabel *originPriceLabel;
@property (retain, nonatomic) NSMutableArray *priceInfoLabelsPool;
@property (retain, nonatomic) IESECInsetsLabel *exclusiveButton;
@property (retain, nonatomic) NSMutableString *priceDescAccessibilityText;
@property (retain, nonatomic) id<IESECLiveItemTimerProtocol> timer;
@property (retain, nonatomic) IESECLiveGoodsPriceCountDown *countDownModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skinConfig;
- (id)douyinNumberABCFontOfSize:(double)a0 weight:(long long)a1;
- (id)protocolToInject;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)updatePriceModuleWithBargainModel:(id)a0 endBlock:(id /* block */)a1;
- (void)setupPriceSkinEnableAdaptSize:(BOOL)a0 forPriceLabel:(id)a1;
- (void)setupShowPriceWithModel:(id)a0 priceInfoIndex:(long long *)a1;
- (void)setupCountDownWithModel:(id)a0;
- (void)setupShowTextWithModel:(id)a0;
- (id)fontOfSize:(double)a0 weight:(double)a1 enableAdaptSize:(BOOL)a2;
- (id)createPriceInfoLabel:(id)a0 priceInfoIndex:(long long *)a1;
- (id)originPriceLabelWithSkin:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)view;
- (void)dealloc;
- (void)setupAccessibility;

@end
