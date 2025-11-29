@interface BDPSchemaCodec : NSObject

+ (id)schemaCodecOptionsFromURL:(id)a0 error:(id *)a1;
+ (id)schemaStringFromCodecOptions:(id)a0 error:(id *)a1;
+ (id)md5String:(id)a0;
+ (id)schemaFromURL:(id)a0 error:(id *)a1;
+ (id)schemaURLFromCodecOptions:(id)a0 error:(id *)a1;
+ (id)appIDFromURL:(id)a0;
+ (id)urlEncodeJSONRepresentationForObj:(id)a0;
+ (void)separatePathAndQuery:(id)a0 syncResultBlock:(id /* block */)a1;
+ (id)addQuery:(id)a0 toSchemaString:(id)a1;
+ (void)separateProtocolHostAndParams:(id)a0 syncResultBlock:(id /* block */)a1;
+ (void)constructStartPageForSchema:(id)a0;
+ (id)validAppRenderType:(id)a0;
+ (id)generateUniqID;
+ (BOOL)checkSumForSchemaString:(id)a0 sumString:(id)a1 version:(id)a2;
+ (void)constructUrlForSchema:(id)a0;
+ (void)constructQueryForSchema:(id)a0;
+ (void)constructExtraForSchema:(id)a0;
+ (void)constructBdpLogForSchema:(id)a0;
+ (void)constructIDEConfigForSchema:(id)a0;
+ (void)constructAdParamsForSchema:(id)a0;
+ (id)schemaStringByUpdateQueryWithKey:(id)a0 value:(id)a1 originString:(id)a2;

@end
