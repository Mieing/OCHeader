@class AVAssetReaderTrackOutput, NSString, AVAssetTrack, AVURLAsset, AVAssetReader;

@interface WCLiveDebugCaptureMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) AVAssetTrack *videoTrack;
@property (retain, nonatomic) AVAssetReader *videoReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerOutput;
@property (nonatomic) BOOL isRestartReading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)startMockCaptureWithVideoPath:(id)a0;
- (BOOL)isMockCaptureStated;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (void)stopMockCapture;
- (void).cxx_destruct;

@end
