@interface LVFileManager : NSObject

+ (id)md5HashOfFileAtPath:(id)a0;
+ (id)sha1HashOfFileAtPath:(id)a0;
+ (id)sha512HashOfFileAtPath:(id)a0;
+ (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1;
+ (BOOL)getAllocatedSize:(unsigned long long *)a0 ofDirectoryAtURL:(id)a1 error:(id *)a2;
+ (BOOL)removeItemAtPath:(id)a0;
+ (BOOL)fileExistsAtPath:(id)a0;
+ (id)contentsOfDirectoryAtPath:(id)a0;

@end
