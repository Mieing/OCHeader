@class NSString, NSArray;

@interface AWEEnterpriseIMMessageGoodsDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSArray *goodsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
