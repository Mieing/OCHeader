@class NSString, AWEURLModel;

@interface AWEIMShareLifeLiveMessageCardProductInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *productName;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (copy, nonatomic) NSString *discountPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long sameCity;
@property (copy, nonatomic) NSString *currencySymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithProductInfo:(id)a0;
- (void).cxx_destruct;

@end
