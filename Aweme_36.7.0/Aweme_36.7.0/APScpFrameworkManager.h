@interface APScpFrameworkManager : NSObject

+ (id)getStorageFilePath;
+ (void)initScpFramework:(int)a0;
+ (id)getNativeConfig;
+ (void)initFramework;
+ (int)executeSyncEvent:(const char *)a0 properties:(const char *)a1 external:(const char *)a2 length:(unsigned int)a3 timeout:(unsigned int)a4 callback:(id /* block */)a5;

@end
