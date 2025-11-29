@interface AWEMemoriesCacheUtils : NSObject

+ (void)copyAssetsForThemeId:(id)a0 toDraftFolder:(id)a1;
+ (BOOL)cleanMemoriesDraftFolders;
+ (id)memoriesDraftPath;
+ (id)memoriesAssetPathWithThemeId:(id)a0;
+ (void)createMemoriesDraftPathIfNotExist;
+ (void)createMemoriesAssetDirectoryWithThemeId:(id)a0 forceRecreate:(BOOL)a1;
+ (id)copyAssetAtURL:(id)a0 toThemePath:(id)a1;

@end
