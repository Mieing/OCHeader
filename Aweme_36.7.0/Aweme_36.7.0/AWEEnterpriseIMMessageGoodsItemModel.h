@class NSString, AWEEnterpriseIMGoodsAvaterModel;

@interface AWEEnterpriseIMMessageGoodsItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *price;
@property (retain, nonatomic) AWEEnterpriseIMGoodsAvaterModel *avaterModel;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avaterModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
