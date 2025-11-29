@interface WCStoryFilePathUtil : NSObject

+ (id)getUserWCStoryPostLimitPath;
+ (id)getUserWCStoryDBPath;
+ (id)getUserWCStoryUploadingTaskPath;
+ (id)getUserWCStoryTaskRetryPath;
+ (id)getUserWCStoryTaskFailPath;
+ (id)getUserWCStoryTaskDeletePath;
+ (id)getUserWCStoryCommentUploadingPath;
+ (id)getUserWCStoryCommentFailedPath;
+ (id)getStorySettingPath;
+ (id)getStoryBGMDir;
+ (id)getUserWCStoryMediaDir;
+ (id)getUserWCStoryUploadMediaDir;
+ (id)getPathForUploadVideoWithTid:(id)a0;
+ (id)getPathForUploadThumbWithTid:(id)a0;
+ (id)getTempPathForSightDataWithTid:(id)a0;
+ (id)getPathForSightDataWithTid:(id)a0;
+ (id)getPathForPreviewWithTid:(id)a0;
+ (id)getTmpPathForPreviewWithTid:(id)a0;
+ (id)getPathForMediaDataWithTid:(id)a0;
+ (id)mediaPathAppendFileName:(id)a0;
+ (id)getStoryMediaFilePathWithTid:(id)a0 ExtensionName:(id)a1;
+ (id)hashPathForStirng:(id)a0;
+ (id)getMediaFolderPath;
+ (id)getPhotoComposeMovieWithMovieFileName:(id)a0;
+ (unsigned long long)getStoryWCDBSize;
+ (unsigned long long)getStoryMeidaFileCacheSize;
+ (BOOL)cleanStoryWCDB;
+ (BOOL)cleanStoryMediaFileCacheSize;

@end
