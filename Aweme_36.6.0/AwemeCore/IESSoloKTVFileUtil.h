@interface IESSoloKTVFileUtil : NSObject

+ (void)createDir:(id)a0;
+ (BOOL)fileExist:(id)a0;
+ (void)createDirIfNeed:(id)a0;
+ (id)fixSuffix:(id)a0;
+ (BOOL)moveFile:(id)a0 toPath:(id)a1;
+ (BOOL)copyFile:(id)a0 toPath:(id)a1;
+ (BOOL)dirExist:(id)a0;
+ (void)removeFile:(id)a0;
+ (int)fileSize:(id)a0;
+ (id)contentsOfDirectoryAtPath:(id)a0;

@end
