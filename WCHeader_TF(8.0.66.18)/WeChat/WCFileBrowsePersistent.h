@interface WCFileBrowsePersistent : NSObject

+ (id)getPathOfBrowseInfoDB;
+ (id)getPathOfTaskInfo;
+ (id)getRelatedMemoryKV;
+ (BOOL)hasFileBrowseTask;
+ (BOOL)cleanFileBrowseTask;
+ (id)getFileBrowseTask;
+ (BOOL)saveFileBrowseTask:(id)a0;
+ (void)resetStateOfFileBrowseBuildProgress;
+ (unsigned long long)getStateOfFileBrowseBuildProgress;
+ (void)setStateOfFileBrowseBuildProgress:(unsigned long long)a0;
+ (void)setVersionNumberOfDB:(int)a0;
+ (int)getVersionNumberOfDB;
+ (id)getDateWithoutHMS:(id)a0;
+ (id)getDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;

@end
