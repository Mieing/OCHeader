@interface UPWebInterface : NSObject

+ (id)getDeviceInfo;
+ (id)infoPath;
+ (BOOL)saveData:(id)a0 error:(id *)a1;
+ (id)getDataForKey:(id)a0;
+ (BOOL)removeData:(id)a0;
+ (BOOL)downloadApp:(id)a0 error:(id *)a1;

@end
