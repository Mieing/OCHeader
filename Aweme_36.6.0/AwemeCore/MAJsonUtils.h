@interface MAJsonUtils : NSObject

+ (BOOL)isValidJsonValue:(id)a0;
+ (id)jsonValueFromObject:(id)a0;
+ (id)allPropertiesOfClass:(Class)a0;
+ (id)jsonObjectFromModel:(id)a0;
+ (id)jsonDataFromModel:(id)a0;
+ (id)modelFromJsonWithData:(id)a0 modelClass:(Class)a1;
+ (id)jsonObjectFromData:(id)a0;
+ (id)modelFromDict:(id)a0 modelClass:(Class)a1;
+ (Class)classOfPropertyNamed:(id)a0 ofClass:(Class)a1;
+ (id)jsonStringFromModel:(id)a0;
+ (id)modelFromJsonWithString:(id)a0 modelClass:(Class)a1;

@end
