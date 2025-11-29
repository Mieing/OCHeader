@interface IESLiveSchemaRegistry : NSObject

+ (id)registeredHosts;
+ (Class)parserClassFromHost:(id)a0;
+ (Class)schemeModelForHost:(id)a0;
+ (void)loadSchemasIfNeeded;
+ (void)setupSchemaDataIfNeeded;
+ (Class)schemaDictValueForKey:(id)a0;
+ (id)schemaDictAllKeys;
+ (Class)schemaModelDictValueForKey:(id)a0;

@end
