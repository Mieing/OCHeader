@interface AWEIMLeagueFileManager : NSObject

+ (id)sharedInstance;

- (id)checkHasLocalFileWithConfig:(id)a0;
- (BOOL)isSupportPreviewWithFileType:(id)a0;
- (void)openFileWithFileUrl:(id)a0 fileType:(id)a1 fileName:(id)a2;
- (id)generateFileUriMd5String:(id)a0 fileType:(id)a1;
- (id)generateUniqueId:(id)a0;
- (void)openFileUseOtherWithFileUrl:(id)a0;

@end
