@interface UPWebInterface : NSObject

+ (id)infoPath;
+ (id)getDeviceInfo;
+ (BOOL)saveData:(id)a0 error:(id *)a1;
+ (BOOL)downloadApp:(id)a0 error:(id *)a1;
+ (BOOL)removeData:(id)a0;
+ (id)getDataForKey:(id)a0;

@end
