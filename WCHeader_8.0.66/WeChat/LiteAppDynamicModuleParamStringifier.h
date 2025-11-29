@interface LiteAppDynamicModuleParamStringifier : NSObject

+ (id)setNativeBuffer:(id)a0 appId:(id)a1 appUuid:(unsigned int)a2 isFromView:(BOOL)a3;
+ (id)stringifyBufferData:(id)a0 appId:(id)a1 appUuid:(unsigned int)a2 isFromView:(BOOL)a3;
+ (id)stringifyJSONObject:(id)a0;
+ (id)jsonStringifyString:(id)a0;
+ (id)stringifyDynamicModuleObject:(id)a0 appId:(id)a1 appUuid:(unsigned int)a2 isFromView:(BOOL)a3;

@end
