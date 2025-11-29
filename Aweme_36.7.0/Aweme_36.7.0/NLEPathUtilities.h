@interface NLEPathUtilities : NSObject

+ (id)resourcePathForFilePath:(id)a0 folder:(id)a1;
+ (id)performResourcePathForFilePath:(id)a0 folder:(id)a1;
+ (BOOL)isNetworkURLPath:(id)a0;
+ (id)checkIsValidAndReplaceNSBundlePrefixIfNeededForAbsolutePath:(id)a0;
+ (id)checkIsValidAndReplaceSandBoxPrefixIfNeededForAbsolutePath:(id)a0;
+ (BOOL)checkIsExsitFileURL:(id)a0 error:(id *)a1;
+ (id)resourcePathForFilePath:(id)a0;

@end
