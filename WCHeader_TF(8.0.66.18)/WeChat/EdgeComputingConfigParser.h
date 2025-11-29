@interface EdgeComputingConfigParser : MMObject

- (id)parseNewScriptExptConfig:(id)a0 withExptItem:(id)a1;
- (id)parseNewScriptFieldConfig:(id)a0;
- (id)parseNewSqlExptConfig:(id)a0 withExptItem:(id)a1;
- (id)parseScriptConfigModel:(id)a0 withJson:(id)a1;
- (id)parseFieldConfigModel:(id)a0;
- (id)parseSqlConfigModel:(id)a0 withJson:(id)a1;
- (id)jsonString2Dictionary:(id)a0;
- (id)arrayForKey:(id)a0 withDictionary:(id)a1;

@end
