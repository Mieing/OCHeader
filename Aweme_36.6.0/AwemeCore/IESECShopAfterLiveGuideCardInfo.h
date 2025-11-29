@class NSString, NSArray;

@interface IESECShopAfterLiveGuideCardInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopURLScheme;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSArray *products;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
