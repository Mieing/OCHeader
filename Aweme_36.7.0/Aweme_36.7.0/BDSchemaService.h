@interface BDSchemaService : NSObject

+ (id)generateDataWithUrl:(id)a0;
+ (id)generateDataWithQueryItems:(id)a0 url:(id)a1;
+ (BOOL)p_allowToParseSchemaRecursiveWithURL:(id)a0;
+ (void)__parseQueryInLoop:(id)a0 schemaData:(id)a1 level:(unsigned long long)a2;
+ (id)generateDataWithConfig:(id)a0 url:(id)a1;

@end
