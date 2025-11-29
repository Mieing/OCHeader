@class NSString, IESECLiveNormalUIConfig, IESECLivePriceTextConfigModel, IESECLiveButtonUIConfig;

@interface IESECLivePromotionCardSkinConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLivePriceTextConfigModel *priceSkin;
@property (retain, nonatomic) IESECLivePriceTextConfigModel *originPriceSkin;
@property (retain, nonatomic) IESECLiveNormalUIConfig *priceDescSkin;
@property (retain, nonatomic) IESECLiveButtonUIConfig *addCartBtnSkin;
@property (retain, nonatomic) IESECLiveButtonUIConfig *buyBtnSkin;
@property (retain, nonatomic) IESECLiveButtonUIConfig *findSimilarBtnSkin;
@property (retain, nonatomic) IESECLiveNormalUIConfig *stepperTextSkin;
@property (retain, nonatomic) IESECLiveButtonUIConfig *stepperAddBtnSkin;
@property (retain, nonatomic) IESECLiveButtonUIConfig *stepperSubBtnSkin;
@property (retain, nonatomic) IESECLiveNormalUIConfig *explainBannerSkin;
@property (retain, nonatomic) IESECLiveNormalUIConfig *explainBgSkin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
