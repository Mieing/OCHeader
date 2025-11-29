@class AWEConcernGoodsLifeFeedSpuPriceTag, NSString, NSArray, AWECOncernGoodsLifeFeedSpuExtraInfo;

@interface AWEConcernGoodsLifeFeedSpu : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *activityPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSArray *saleTags;
@property (copy, nonatomic) NSString *soldCountTag;
@property (nonatomic) long long soldCount;
@property (copy, nonatomic) NSString *detailSchema;
@property (copy, nonatomic) NSArray *rateComments;
@property (copy, nonatomic) NSString *activityText;
@property (copy, nonatomic) NSString *activityPriceSuffix;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpuPriceTag *priceTag;
@property (copy, nonatomic) AWECOncernGoodsLifeFeedSpuExtraInfo *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)IDJSONTransformer;
+ (id)activityPriceJSONTransformer;
+ (id)originPriceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
