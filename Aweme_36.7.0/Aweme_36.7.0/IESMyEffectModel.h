@class NSArray, NSString;

@interface IESMyEffectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectsJSONTransformer;
+ (id)collectionJSONTransformer;
+ (id)bindEffectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)updateEffects;

@end
