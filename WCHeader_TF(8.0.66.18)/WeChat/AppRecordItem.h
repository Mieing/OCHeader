@interface AppRecordItem : NSObject

+ (BOOL)ParserRecordXML:(id)a0 TORecordItem:(id)a1 msg:(id)a2;
+ (id)genRecordTitleByDataList:(id)a0;
+ (id)genRecordTitleByDataList:(id)a0 forShort:(BOOL)a1;
+ (id)RecordItemToXML:(id)a0 innerType:(unsigned int)a1;
+ (void)GetPathOfAppDir:(id)a0 retStrPath:(id *)a1;
+ (id)GetRecordThumbPathByUsername:(id)a0 LocalID:(unsigned int)a1 DataID:(id)a2;
+ (id)GetRecordDataTempPathByPath:(id)a0;
+ (id)GetRecordDataPathByUsername:(id)a0 LocalID:(unsigned int)a1 DataID:(id)a2 DataExt:(id)a3;
+ (id)GetMiddleDataPathByUsername:(id)a0 LocalID:(unsigned int)a1 DataID:(id)a2 DataExt:(id)a3;
+ (id)GetRecordDataDir:(id)a0 LocalID:(unsigned int)a1;

@end
