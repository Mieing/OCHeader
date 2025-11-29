@class NSString, NSDictionary;

@interface IESECShopInfoSWSExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *brandShop;
@property (copy, nonatomic) NSDictionary *sliceConfigs;
@property (copy, nonatomic) NSString *frameworkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sliceConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
