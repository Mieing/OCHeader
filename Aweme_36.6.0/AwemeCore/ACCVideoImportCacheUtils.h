@interface ACCVideoImportCacheUtils : NSObject

+ (id)defaultPathForAVAsset:(id)a0 taskID:(id)a1;
+ (id)tempFolderPathWithTaskID:(id)a0;
+ (id)outputURLForAVAsset:(id)a0 taskID:(id)a1;
+ (void)removeItemInTempFolder;
+ (id)defaultTempFolder;
+ (id)defaultDraftFolderForTaskID:(id)a0;
+ (id)defaultPathForAVAsset:(id)a0;
+ (void)removeItemInDefaultTempFolder;
+ (id)fileURLWithString:(id)a0;

@end
