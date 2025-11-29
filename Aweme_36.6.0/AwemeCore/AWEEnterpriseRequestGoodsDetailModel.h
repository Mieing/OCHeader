@class NSArray, NSString;

@interface AWEEnterpriseRequestGoodsDetailModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long total;
@property (copy, nonatomic) NSArray *goodsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
