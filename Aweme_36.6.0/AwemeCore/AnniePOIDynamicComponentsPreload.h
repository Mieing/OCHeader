@class NSArray, NSString;

@interface AnniePOIDynamicComponentsPreload : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conditionsJSONTransformer;
+ (BOOL)isConditionMatch:(id)a0 conditions:(id)a1;
+ (void)invokePOIDynamicComponentsPreload:(id)a0 lynxView:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
