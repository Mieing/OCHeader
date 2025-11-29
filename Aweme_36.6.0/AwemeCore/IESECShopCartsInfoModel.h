@class NSString;

@interface IESECShopCartsInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cartsURL;
@property (nonatomic) long long productsNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
