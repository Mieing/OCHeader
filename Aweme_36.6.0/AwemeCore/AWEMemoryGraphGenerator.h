@interface AWEMemoryGraphGenerator : NSObject

+ (void)generateMemoryGraphWithRequest:(id)a0 error:(id *)a1 degrade:(unsigned long long *)a2;
+ (BOOL)checkIfHasGraphUnderPath:(id)a0;
+ (const char *)bundleHelperCopyAppBundleName;
+ (id)lockPath:(id)a0;
+ (void)dealWithImageInfo:(id)a0;
+ (id)p_graphMetaPathWithBasePath:(id)a0;
+ (id)p_graphStrPathWithBasePath:(id)a0;
+ (id)p_graphMainPathWithBasePath:(id)a0;
+ (void)initialize;

@end
