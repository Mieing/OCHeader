@class AVAssetWriterInput, NSString, BDPUniqueID, AVAssetWriter;

@interface BDPStarkReplayManager : NSObject <RPScreenRecorderDelegate, RPPreviewViewControllerDelegate>

@property (retain, nonatomic) AVAssetWriter *assetWritter;
@property (retain, nonatomic) AVAssetWriterInput *assetWritterInput;
@property (copy, nonatomic) NSString *outputPath;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long startedTime;
@property (nonatomic) int maxDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)cancelRecordingWithUniqueID:(id)a0;
- (void)startRecordingWithOutputPath:(id)a0 maxDuration:(int)a1 uniqueID:(id)a2 handler:(id /* block */)a3;
- (void)stopRecordingWithViewController:(id)a0 handler:(id /* block */)a1;
- (void)startRecordingOverIOS10WithHandler:(id /* block */)a0;
- (void)stopRecordingOverIOS14WithHandler:(id /* block */)a0;
- (void)onGameRecorderStateChanged:(id)a0 data:(id)a1;
- (void)autoStopRecording;
- (long long)getVideoDurationWithSourcePath:(id)a0;
- (void)startRecordingWithOutputPath:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)videoOutputURL;
- (void)screenRecorder:(id)a0 didStopRecordingWithError:(id)a1 previewViewController:(id)a2;
- (void)screenRecorder:(id)a0 didStopRecordingWithPreviewViewController:(id)a1 error:(id)a2;
- (void)screenRecorderDidChangeAvailability:(id)a0;
- (void)previewControllerDidFinish:(id)a0;
- (void)previewController:(id)a0 didFinishWithActivityTypes:(id)a1;

@end
