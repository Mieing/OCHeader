@interface AWEMediaDownloadLivePhotoStage : AWEMediaDownloadBaseStage

- (long long)progressUnitCount;
- (void)convertVideoToLivePhoto;
- (void)handleCompleteWithVideoURL:(id)a0 imageURL:(id)a1 error:(id)a2;
- (BOOL)shouldRun;
- (void)run;
- (void)handleProgress:(double)a0;

@end
