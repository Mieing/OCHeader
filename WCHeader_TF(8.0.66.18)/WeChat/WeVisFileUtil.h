@interface WeVisFileUtil : NSObject

+ (void)setResourceProvider:(id)a0;
+ (id)modelFilePathForKey:(id)a0;
+ (void)setModelProvider:(id)a0;
+ (id)modelListConfig;
+ (id)bundleModelRoot;
+ (void)initModelConfig;
+ (id)modelPathWithKey:(id)a0;
+ (id)modelVersionWithKey:(id)a0;
+ (BOOL)modelFilesExist:(id)a0;
+ (id)weVisionDir;
+ (id)modelDir;
+ (id)modelTempDir;
+ (id)modelListConfigPath;

@end
