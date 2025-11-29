@class NSString, NSArray;

@interface AWEConcernGoodsLifeFeedSpuCardShareInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *activityPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (nonatomic) long long shareSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityPriceJSONTransformer;
+ (id)originPriceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
