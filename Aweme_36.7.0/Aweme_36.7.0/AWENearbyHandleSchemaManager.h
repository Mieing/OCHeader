@interface AWENearbyHandleSchemaManager : NSObject

+ (id)mergeDictionary:(id)a0 appendParams:(id)a1 objectKey:(id)a2;
+ (id)mergeGrouponAttributeParams:(id)a0 objectKey:(id)a1 appendParams:(id)a2;
+ (id)getDictionaryOfURL:(id)a0 forKey:(id)a1;
+ (id)getDictionaryWithUrl:(id)a0 objectKey:(id)a1;
+ (id)handleAppendParams:(id)a0 objectKey:(id)a1 appendParams:(id)a2;
+ (id)convertJSONStringValueToDict:(id)a0;
+ (id)convertDictValueToJSONString:(id)a0 encode:(BOOL)a1;
+ (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

@end
