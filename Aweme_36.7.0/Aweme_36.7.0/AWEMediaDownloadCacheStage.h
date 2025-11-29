@interface AWEMediaDownloadCacheStage : AWEMediaDownloadBaseStage

- (void)getCache;
- (BOOL)skipCacheToAddWatermark:(id)a0;
- (BOOL)copyCacheFileToDestination:(id)a0;
- (void)run;

@end
