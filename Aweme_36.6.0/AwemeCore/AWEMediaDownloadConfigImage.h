@interface AWEMediaDownloadConfigImage : AWEMediaDownloadConfigCommon

- (id)disabledDownloadMessage;
- (BOOL)usingPlayerCache;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;

@end
