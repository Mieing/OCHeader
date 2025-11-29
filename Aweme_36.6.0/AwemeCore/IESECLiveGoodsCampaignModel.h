@class IESECLiveConfigCountDownModel, NSString, NSURL, IESECLiveGoodsDepositModel, IESECLiveImageURLModel, IESECLiveGoodsCampaignProgressInfo, IESECLiveGoodsCampaignMultiGroupInfo, IESECLiveGoodsAuctionInfo, IESECLiveGoodsGroupBuyModel, NSNumber;

@interface IESECLiveGoodsCampaignModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDownModel;
@property (nonatomic) double maxStockRatio;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *campaignID;
@property (retain, nonatomic) NSURL *pic;
@property (retain, nonatomic) NSNumber *style;
@property (copy, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (copy, nonatomic) NSString *minPriceStr;
@property (retain, nonatomic) NSNumber *limitCount;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *startLabel;
@property (copy, nonatomic) NSString *endLabel;
@property (retain, nonatomic) NSNumber *stock;
@property (nonatomic) BOOL isPreheat;
@property (retain, nonatomic) NSNumber *leftStock;
@property (copy, nonatomic) NSString *progressText;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) IESECLiveImageURLModel *campaignIcon;
@property (nonatomic) long long campainType;
@property (retain, nonatomic) IESECLiveGoodsGroupBuyModel *groupBuy;
@property (retain, nonatomic) IESECLiveGoodsDepositModel *deposit;
@property (retain, nonatomic) IESECLiveGoodsAuctionInfo *auctionInfo;
@property (retain, nonatomic) IESECLiveGoodsCampaignProgressInfo *campaignProgressInfo;
@property (retain, nonatomic) IESECLiveGoodsCampaignMultiGroupInfo *multiGroupInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)campaignIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)countDownLabel;
- (long long)startInterval;
- (BOOL)isGroupBuy;
- (BOOL)isValidWithServerTime:(id)a0;
- (id)auctionStatusImageName;
- (void)decreaseSeconds:(long long)a0;
- (BOOL)isAuction;
- (BOOL)isMultiGroupBuy;
- (BOOL)inCampaign;
- (BOOL)isSecKill;
- (BOOL)isDeposit;
- (BOOL)inAuction;
- (BOOL)shouldAuctionTimer;
- (BOOL)isLimitTimeBuyPreHeat;
- (void)updateMaxStockRatio;
- (BOOL)isLimitBuy;
- (BOOL)isLimitTimeBuy;
- (BOOL)isLimitQuantityBuy;
- (double)stockRatio;
- (id)campaignLabel;
- (id)campaignCountDownAttributedLabelWithNewDesign:(BOOL)a0;
- (BOOL)isPlatformGoodsSubsidy;
- (long long)campaignStatus;
- (id)initWithUpdatedCampaignInfo:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (long long)endInterval;

@end
