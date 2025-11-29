@interface AWECommentMediaDownloadConfigCommon : AWECommentMediaDownloadConfig

- (id)awemeModel;
- (id)imageDownloadURL;
- (BOOL)shouldForbidWartermark;
- (BOOL)newDownloadUX;
- (id)downloadSizeTextWithSizeInByte;
- (id)loadingViewTitle;
- (id)disabledDownloadMessage;
- (BOOL)checkAwemeDownloadSecurity;
- (Class)loadingViewClass;
- (BOOL)isForbidDownload;
- (id)destinationURL;
- (id)downloadURL;

@end
