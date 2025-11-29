@interface AWEMediaDownloadConfigNoWatermarkVideo : AWEMediaDownloadConfigCommon

- (BOOL)usingUploadCache;
- (BOOL)usingPlayerCache;
- (BOOL)isForbidDownload;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (id)downloadURL;

@end
