@class NSString, NSArray, AWEECMallFeedPriceModel, NSDictionary, AWEURLModel;

@interface AWEECMallFeedProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWEECMallFeedPriceModel *price;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSDictionary *reason;
@property (copy, nonatomic) NSString *promotionId;
@property (nonatomic) long long sales;
@property (copy, nonatomic) NSString *salesText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)priceJSONTransformer;

- (void).cxx_destruct;

@end
