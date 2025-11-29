@interface AWEStudioDraftUtils : NSObject

+ (BOOL)isDraftDirectory:(id)a0;
+ (id)allDraftPathsInDB;
+ (id)allDraftPathsInDirectory;
+ (id)getFileLastAccessDate:(id)a0;
+ (id)pendingDeleteDraftPaths;
+ (id)unusedDraftPaths;
+ (id)getDirectoryLatestAccessDate:(id)a0;
+ (BOOL)enableDraftDegree:(id)a0;

@end
