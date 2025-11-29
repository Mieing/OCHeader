@interface HMDExtensionDirectory : NSObject

+ (id)extensionDirectoryWithMonitorType:(unsigned long long)a0;
+ (id)extensionConfigFilePathWithMonitorType:(unsigned long long)a0;
+ (id)appGroupRootURL;
+ (id)appGroupHeimdallrRootURL;
+ (id)monitorDescriptionWithMonitorType:(unsigned long long)a0;
+ (void)createFileOrDirectoryAtURLIfNeeded:(id)a0 createDir:(BOOL)a1;
+ (id)rootURLWithMigrateCheck;

@end
