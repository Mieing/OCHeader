@class IESECLiveGoodsBizExtendParam, IESECLiveGoodsPurchaseModel, IESECLiveGoodsPriceModel, IESECLiveGoodsInfoModel, IESECLiveGoodsCoverModel, IESECLiveGoodsTitleModel, IESECLiveGoodsRitTagModel, IESECLiveGoodsTrackModel, NSString, IESECLiveGoodsBottomModel, IESECLiveGoodsBlankModel, NSNumber, IESECLiveGoodsProductModel;

@interface IESECLiveGoodsModelV2 : IESECLiveGoodsBaseModel

@property (retain, nonatomic) NSString *originIdFromCheck;
@property (retain, nonatomic) NSString *originTypeFromCheck;
@property (nonatomic) BOOL isMultiGroupBuyFromCheck;
@property (retain, nonatomic) IESECLiveGoodsRitTagModel *basePickTag;
@property (retain, nonatomic) IESECLiveGoodsCoverModel *image;
@property (retain, nonatomic) IESECLiveGoodsTitleModel *title;
@property (retain, nonatomic) IESECLiveGoodsInfoModel *info;
@property (retain, nonatomic) IESECLiveGoodsPriceModel *price;
@property (retain, nonatomic) IESECLiveGoodsPurchaseModel *purchase;
@property (retain, nonatomic) IESECLiveGoodsBottomModel *bottom;
@property (retain, nonatomic) IESECLiveGoodsBlankModel *blank;
@property (retain, nonatomic) IESECLiveGoodsProductModel *product;
@property (retain, nonatomic) IESECLiveGoodsBizExtendParam *bizExtendParam;
@property (retain, nonatomic) IESECLiveGoodsTrackModel *track;
@property (nonatomic) BOOL isRelatedPromotion;
@property (retain, nonatomic) NSNumber *auctionEndTimeByMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (id)trackExtra;
- (id)shopID;
- (id)applyCoupon;
- (long long)goodsStatus;
- (id)detailURL;
- (id)goodsID;
- (id)showNotice;
- (id)bizIdentity;
- (id)checkCallback;
- (void)setHotSaleInfo:(id)a0;
- (id)auctionHotAtmosphere;
- (id)coverForDetail;
- (void)transferBusinessParamsToModel:(id)a0;
- (id)minSalePrice;
- (id)cartNum;
- (void)setIsMultiGroupBuy:(BOOL)a0;
- (void)setCartNum:(id)a0;
- (BOOL)hasComboBuyOrCombination;
- (BOOL)hasGoodsBottomBanner;
- (id)createLiveGoodsModelBySelf;
- (BOOL)isPurchaseStepperDisabled;
- (BOOL)hasPurchaseStepper;
- (id)leafCategory;
- (long long)dynamicRecommendIndex;
- (id)hotSaleInfo;
- (void)setAuctionHotAtmosphere:(id)a0;
- (BOOL)isMultiGroupBuy;
- (BOOL)isSingleSKU;
- (id)categoryInfoModel;
- (BOOL)isLottery;
- (BOOL)actionButtonClickEnabled;
- (id)liveEventParams;
- (id)productTagTrackParamsForGoodsTrack;
- (void)getTagTrackModelsWithBlock:(id /* block */)a0;
- (BOOL)unrecEvent;
- (id)toADTrackParamsDictionary;
- (id)labelNameLiveTotal;
- (void)initBasePickBanner;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (long long)channelID;
- (long long)channelType;
- (id)itemType;
- (id)titleString;
- (void)setOriginID:(id)a0;
- (id)originID;
- (id)coverURL;
- (id)originType;
- (void)setOriginType:(id)a0;

@end
