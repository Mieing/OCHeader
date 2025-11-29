@class NSString, NSArray;

@interface IESCategoryVideoEffectsModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, copy, nonatomic) NSArray *collection;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (readonly, copy, nonatomic) NSArray *bindEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectsJSONTransformer;
+ (id)collectionJSONTransformer;
+ (id)bindEffectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
