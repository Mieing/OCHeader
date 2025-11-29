@interface MBInternalJsApiRegister : NSObject

+ (void)registerInternalJsApi:(id)a0 withConfig:(id)a1;
+ (void)addBasicJsapi:(id)a0;
+ (void)addSystemInfoJsapi:(id)a0;
+ (void)addDownloadJsapi:(id)a0;
+ (void)addStorageJsapi:(id)a0;
+ (void)addFileSystemJsapi:(id)a0;

@end
