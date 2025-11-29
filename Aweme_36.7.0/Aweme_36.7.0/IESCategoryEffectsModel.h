@class NSString, NSArray, NSMutableDictionary;

@interface IESCategoryEffectsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSMutableDictionary *effectsMap;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;
@property (readonly, copy, nonatomic) NSArray *bindEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (id)downloadedEffects;
- (void).cxx_destruct;

@end
