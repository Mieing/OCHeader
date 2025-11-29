@class IESECGoodsAuctionModel, IESECGoodsGroupBuyingModel, IESECGoodsWarmupModel, NSDictionary, IESECCommonGirdleActivityModelV2, IESECGoodsMarketingFloorModel, IESECGoodsSeckillModel, IESECGoodsQualificationActivity, IESECSubsidyActivityModel, IESECGoodsIPActivityModel, IESECGoodsPresaleModel, IESECGoodsFullReductionModel, IESECGoodsNGroupBuyModel, IESECCommonGirdleActivityModel, IESECGoodsMemberSampleModel, NSString, IESECGoodsDepositPresaleModel;

@interface IESECGoodsDetailActivityModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsFullReductionModel *fullReduction;
@property (retain, nonatomic) IESECGoodsPresaleModel *presale;
@property (retain, nonatomic) IESECGoodsSeckillModel *seckill;
@property (retain, nonatomic) IESECGoodsWarmupModel *warmup;
@property (retain, nonatomic) IESECGoodsGroupBuyingModel *groupbuy;
@property (retain, nonatomic) IESECGoodsNGroupBuyModel *nGroupBuy;
@property (retain, nonatomic) IESECGoodsDepositPresaleModel *depositPresale;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *bannerActivity;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *textActivity;
@property (retain, nonatomic) IESECGoodsIPActivityModel *ipActivity;
@property (retain, nonatomic) NSDictionary *mfPromotionEvent;
@property (retain, nonatomic) IESECGoodsAuctionModel *auction;
@property (retain, nonatomic) IESECSubsidyActivityModel *subsidy;
@property (retain, nonatomic) IESECGoodsMemberSampleModel *memberSample;
@property (retain, nonatomic) IESECGoodsQualificationActivity *qualificationActivity;
@property (nonatomic) long long interalFeedActivityStyle;
@property (retain, nonatomic) IESECCommonGirdleActivityModel *commonGirdle;
@property (retain, nonatomic) IESECCommonGirdleActivityModelV2 *commonGirdleV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
