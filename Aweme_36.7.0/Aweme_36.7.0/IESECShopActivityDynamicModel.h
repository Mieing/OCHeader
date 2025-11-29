@class NSArray, NSString;

@interface IESECShopActivityDynamicModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;

@end
