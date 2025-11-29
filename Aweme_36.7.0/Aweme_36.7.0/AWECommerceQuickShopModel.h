@class NSString, AWECommerceQuickShopProcessModel;

@interface AWECommerceQuickShopModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *quickShopURL;
@property (copy, nonatomic) NSString *quickShopName;
@property (nonatomic) BOOL showTextEntry;
@property (retain, nonatomic) AWECommerceQuickShopProcessModel *quickShopProcessModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickShopProcessModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
