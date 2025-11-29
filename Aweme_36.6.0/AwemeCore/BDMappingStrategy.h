@interface BDMappingStrategy : NSObject

+ (id)mapJSONKeyWithArray:(id)a0 options:(unsigned long long)a1;
+ (id)mapSnakeCaseToCamel:(id)a0;
+ (id)mapCamelToSnakeCase:(id)a0;
+ (id)mapJSONKeyWithDictionary:(id)a0 options:(unsigned long long)a1;

@end
