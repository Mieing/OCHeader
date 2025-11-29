@class NSString;

@interface IESECShopProductsClientState : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long listStyle;
@property (copy, nonatomic) NSString *selectButtonsContent;
@property (copy, nonatomic) NSString *PromotionFilterContent;
@property (copy, nonatomic) NSString *interactiveProductID;
@property (copy, nonatomic) NSString *unexposedInteractiveProductIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
