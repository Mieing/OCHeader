@interface IESECLiveSchemeGenerator : NSObject

+ (id)detailEntranceInfoSchemaDicWithParams:(id)a0;
+ (id)scheme:(id)a0 insertParams:(id)a1;
+ (id)v3EventsAdditionsSchemaDicWithParams:(id)a0;
+ (id)megaObjectFromRaw:(id)a0;
+ (id)logDataSchemaDicWithParams:(id)a0;
+ (id)orderEntranceInfoSchemaDicWithParams:(id)a0;
+ (id)simplifyMegaObjectFromRaw:(id)a0;
+ (id)encodeUrlString:(id)a0 mapDicArr:(id)a1;
+ (void)insertParams:(id)a0 atSuperParams:(id)a1 valueNeedEncode:(BOOL)a2;
+ (id)valueOfDictionaryKey:(id)a0 andOriginValue:(id)a1 insertParams:(id)a2 valueNeedEncode:(BOOL)a3;

@end
