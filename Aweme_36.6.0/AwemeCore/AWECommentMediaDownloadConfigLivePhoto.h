@interface AWECommentMediaDownloadConfigLivePhoto : AWECommentMediaDownloadConfigCommon

- (id)loadingViewTitle;
- (id)watermarkConfig;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;

@end
