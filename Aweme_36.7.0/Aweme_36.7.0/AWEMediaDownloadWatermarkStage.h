@interface AWEMediaDownloadWatermarkStage : AWEMediaDownloadBaseStage

- (long long)progressUnitCount;
- (void)addImageWatermark;
- (void)addWaterMark;
- (void)handleWatermarkCompleteWithFileURL:(id)a0 error:(id)a1;
- (void)addWaterMarkImpl;
- (long long)watermarkExporterOptions;
- (BOOL)shouldRun;
- (void)_run;
- (void)run;
- (void)appDidBecomeActive:(id)a0;
- (void)cancel;
- (void)handleProgress:(double)a0;

@end
