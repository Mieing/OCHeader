@interface ACCVideoQualityLazyLocalStrategy : ACCVideoQualityBaseStrategy

- (id)inputFileBitrate;
- (id)inputFileResolution;
- (id)renderResolution;
- (id)inputFileFps;
- (id)renderFps;
- (id)videoQualitySetting;
- (id)inputPreviewResolution;
- (id)isForceEncode;
- (id)compileFileResolution;
- (id)compileFileBitrate;
- (id)compileFileFps;
- (id)compileRemuxBitrateLimit;
- (id)watermarkFileResolution;
- (id)watermarkFileBitrate;
- (id)watermarkFileFps;
- (void)execute:(id /* block */)a0;

@end
