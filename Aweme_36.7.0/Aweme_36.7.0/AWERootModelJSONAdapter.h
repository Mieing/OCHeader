@class NSDictionary;

@interface AWERootModelJSONAdapter : NSObject

@property (copy, nonatomic) NSDictionary *propertyInfosMap;
@property (copy, nonatomic) NSDictionary *keyPathToPropertyInfoMap;
@property (copy, nonatomic) NSDictionary *propertyValueTransformersMap;

+ (id)adapterWithPropertyInfosMap:(id)a0;

- (id)modelWithClass:(Class)a0 JSONDictionary:(id)a1 sharedModelInfos:(id)a2;
- (void)generateMaps;
- (void).cxx_destruct;
- (id)JSONDictionaryFromModel:(id)a0;

@end
