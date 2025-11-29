@class NSError, NSObject;
@protocol OS_dispatch_group;

@interface AWEMediaDownloadCommentWatermarkStage : AWEMediaDownloadWatermarkStage

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)finishThenContinue;
- (void)failedThenContinueWithError:(id)a0;
- (void)addLivePhotoWatermark;
- (void)addImageWatermark;
- (void)handleWatermarkCompleteWithFileURL:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldRun;
- (void)_run;
- (void)run;

@end
