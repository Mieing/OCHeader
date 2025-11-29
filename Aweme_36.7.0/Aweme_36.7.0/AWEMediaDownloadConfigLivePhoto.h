@interface AWEMediaDownloadConfigLivePhoto : AWEMediaDownloadConfigCommon

- (id)loadingViewTitle;
- (BOOL)shouldSaveDirectly;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;

@end
