@class NSString;

@interface IESECWinRecommendStoreModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long storeProductCount;
@property (copy, nonatomic) NSString *storeUrl;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *recommendText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
