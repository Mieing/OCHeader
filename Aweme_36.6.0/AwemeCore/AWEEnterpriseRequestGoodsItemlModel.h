@class NSString;

@interface AWEEnterpriseRequestGoodsItemlModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *img;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *productID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
