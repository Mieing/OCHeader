@class IESECImageModel, NSString, NSArray, IESECTextElement, IESECGoodsActivityCountdown, IESECGoodsDetailBaseInfoSkuDataModel, IESECSubsidyActivityModel, IESECGoodsDetailActivityTimeModel, NSNumber, IESECPriceElement;

@interface IESECGoodsDetailMarketingActivityDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) IESECGoodsDetailActivityTimeModel *activityTime;
@property (retain, nonatomic) IESECImageModel *backgroundImageModel;
@property (retain, nonatomic) IESECImageModel *iconImageModel;
@property (retain, nonatomic) IESECTextElement *activityHintText;
@property (retain, nonatomic) IESECTextElement *priceDesc;
@property (retain, nonatomic) IESECPriceElement *priceElement;
@property (retain, nonatomic) IESECPriceElement *marketPriceElement;
@property (retain, nonatomic) IESECPriceElement *discountPriceElement;
@property (retain, nonatomic) IESECTextElement *saleElement;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *rulePageURL;
@property (nonatomic) long long joined;
@property (nonatomic) long long groupSize;
@property (nonatomic) long long percent;
@property (nonatomic) long long skuMinPrice;
@property (nonatomic) long long skuMaxPrice;
@property (copy, nonatomic) NSArray *groupBuyerList;
@property (retain, nonatomic) IESECPriceElement *depositPrice;
@property (retain, nonatomic) NSNumber *auctionID;
@property (nonatomic) long long auctionStatus;
@property (retain, nonatomic) IESECSubsidyActivityModel *subsidy;
@property (nonatomic) long long activityState;
@property (retain, nonatomic) IESECGoodsActivityCountdown *countdown;
@property (copy, nonatomic) NSString *preActivityHintString;
@property (retain, nonatomic) IESECGoodsDetailBaseInfoSkuDataModel *skuInfo;
@property (nonatomic) BOOL isGroupBuying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupBuyerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
