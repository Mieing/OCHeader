@class NSArray, NSString;

@interface IESECShopProductsSLICardConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
