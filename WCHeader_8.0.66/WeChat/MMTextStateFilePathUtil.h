@interface MMTextStateFilePathUtil : NSObject

+ (id)getUserTextStateMediaDir;
+ (id)getUserTextStateMediaUploadMediaDir;
+ (id)getUserTextStateCacheDir;
+ (id)getPathForUploadTempCacheDir;
+ (id)getPathForUploadImageWithTid:(id)a0;
+ (id)getPathForUploadVideoWithTid:(id)a0;
+ (id)getPathForUploadThumbWithTid:(id)a0;
+ (id)getPathForUploadWxamWithTid:(id)a0;
+ (id)getTempPathForSightDataWithTid:(id)a0;
+ (id)getPathForSightDataWithTid:(id)a0;
+ (id)getPathForWxamDataWithTid:(id)a0;
+ (id)getPathForPreviewWithTid:(id)a0;
+ (id)getTmpPathForPreviewWithTid:(id)a0;
+ (id)getPathForImageWithTid:(id)a0;
+ (id)getTmpPathForImageWithTid:(id)a0;
+ (id)getPathForLikedData;
+ (id)mediaPathAppendFileName:(id)a0;
+ (id)getTextStateMediaFilePathWithTid:(id)a0 ExtensionName:(id)a1;
+ (id)hashPathForStirng:(id)a0;
+ (id)getMediaFolderPath;
+ (BOOL)cleanTextStateMediaFileCacheSize;
+ (id)GetTextStateUserDir;
+ (id)GetTextStateDBPath;
+ (id)GetDBConfigPath;

@end
