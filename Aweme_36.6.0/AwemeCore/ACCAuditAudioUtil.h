@interface ACCAuditAudioUtil : NSObject

+ (void)p_createDirectoryIfNeeded:(id)a0;
+ (id)auditFolder;
+ (id)auditAudioFolder;
+ (id)auditAudioTaskFolderWithID:(id)a0;
+ (void)logInfo:(id)a0;
+ (void)logError:(id)a0;

@end
