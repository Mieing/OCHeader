@class NSString;

@interface AWEConcernGoodsLifeFeedSpuPriceTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *price;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (void).cxx_destruct;

@end
