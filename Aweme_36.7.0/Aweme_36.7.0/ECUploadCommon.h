@interface ECUploadCommon : NSObject

+ (unsigned long long)calculateCrc32WithFilePath:(id)a0 offset:(long long)a1 size:(long long)a2;
+ (id)calculateMd5:(id)a0 offset:(long long)a1 size:(long long)a2;
+ (BOOL)fileExitAtPath:(id)a0;
+ (id)cachePathForTaskKey:(id)a0 identifier:(id)a1;
+ (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 overwrite:(BOOL)a2 error:(id *)a3;
+ (void)caculateCrc32AndMd5:(id)a0 offset:(long long)a1 size:(long long)a2 complete:(id /* block */)a3;
+ (long long)caculateFileSize:(id)a0;
+ (void)removeUploadFileForTaskKey:(id)a0;
+ (BOOL)removeItemAtPath:(id)a0;

@end
