@interface WCSessionJsonDataParser : WCSessionBaseDataParser

- (id)parseSessionFlowConfigModel:(id)a0;
- (id)parseSessionConfigModel:(id)a0;
- (id)parsePagePathConfigModel:(id)a0 withSessionPageId:(id)a1 withReport:(BOOL)a2;
- (id)parsePagePathUnitConfigModel:(id)a0;
- (id)parseDataPathConfigModel:(id)a0;
- (id)parseViewOperationConfigModel:(id)a0;
- (id)parseSessionUBAConfigModels:(id)a0;
- (id)parseSessionUBAUnitConfigModel:(id)a0;
- (id)jsonString2Dictionary:(id)a0;
- (id)arrayForKey:(id)a0 withDictionary:(id)a1;

@end
