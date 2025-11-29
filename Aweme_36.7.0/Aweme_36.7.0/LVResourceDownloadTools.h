@interface LVResourceDownloadTools : NSObject

+ (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1;
+ (void)pathUpdate:(id)a0 request:(id)a1 md5:(id)a2;
+ (BOOL)removeItemAtPath:(id)a0;
+ (BOOL)fileExistsAtPath:(id)a0;
+ (id)contentsOfDirectoryAtPath:(id)a0;
+ (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1;

@end
