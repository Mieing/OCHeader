@class NSArray, NSString, NSDictionary;

@interface IESECShopProductsInteractiveControl : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *retreatItems;
@property (nonatomic) unsigned long long retreatDistance;
@property (nonatomic) BOOL removeUnexposedProducts;
@property (nonatomic) BOOL clientAiDecideShow;
@property (copy, nonatomic) NSString *clientAiBusinessName;
@property (copy, nonatomic) NSDictionary *clientAiInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
