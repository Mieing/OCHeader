@interface AWEAIGCAsyncTaskPathUtil : NSObject

+ (id)generatePathWithFileName:(id)a0 taskId:(id)a1;
+ (void)deleteTaskFilesExceptTaskIds:(id)a0;
+ (id)getFolderOfTaskId:(id)a0;
+ (id)taskBaseFolder;
+ (id)generatePathTaskId:(id)a0;
+ (id)rootFolder;
+ (id)allContents;

@end
