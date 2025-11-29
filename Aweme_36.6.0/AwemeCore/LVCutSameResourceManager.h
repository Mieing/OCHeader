@interface LVCutSameResourceManager : NSObject

+ (BOOL)recursionForMergeFolder:(id)a0 desPath:(id)a1;
+ (BOOL)replaceResourceAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)saveImageData:(id)a0 path:(id)a1 error:(id *)a2;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
+ (BOOL)directoryExistsAtPath:(id)a0;

@end
