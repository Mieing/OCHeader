@class AWEShareSpikeGoodsIMInfoModel, NSString, AWEShareSpikeGoodsPriceModel, NSArray, AWEShareSpikeGoodsCampaignModel, AWEURLModel;

@interface AWEShareSpikeGoodsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *image;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEShareSpikeGoodsPriceModel *price;
@property (nonatomic) long long purchaseStatus;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *indemnities;
@property (copy, nonatomic) NSString *benefitDesc;
@property (retain, nonatomic) AWEURLModel *badgeInfo;
@property (retain, nonatomic) AWEShareSpikeGoodsIMInfoModel *imInfo;
@property (retain, nonatomic) AWEShareSpikeGoodsCampaignModel *campaign;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *decisionUrl;
@property (copy, nonatomic) NSString *shareTemplate;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *qrMetaParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)imInfoJSONTransformer;
+ (id)campaignJSONTransformer;
+ (id)badgeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (void).cxx_destruct;

@end
