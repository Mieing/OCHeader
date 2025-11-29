@interface IESLaunchProtectCleaner : NSObject

+ (void)protectFirstTry;
+ (void)_overrideCleanWhenFirstTry;
+ (void)removeDirectoryContentAtURL:(id)a0 withIgnoreItems:(id)a1;
+ (BOOL)matchIgnoreItem:(id)a0 withIgnoreItems:(id)a1;
+ (id)getQueryResult:(id)a0;
+ (void)protectDeepClean:(id /* block */)a0;
+ (id)getAllKeychain:(struct __CFString { } *)a0;

@end
