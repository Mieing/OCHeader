@class NSString, ACCRecordMode, NSURL, AWEAssetModel;
@protocol ACCVideoConfigProtocol, AWEVideoBGStickerManagerDelegate;

@interface AWEVideoBGStickerManager : NSObject

@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (nonatomic) double lastUpdatedSpeed;
@property (retain, nonatomic) NSURL *defaultVideoAssetUrl;
@property (copy, nonatomic) NSString *pixaloopVKey;
@property (retain, nonatomic) AWEAssetModel *currentSelectedMattingAssetModel;
@property (retain, nonatomic) NSURL *currentApplyVideoBGUrl;
@property (weak, nonatomic) id<AWEVideoBGStickerManagerDelegate> delegate;
@property (nonatomic) BOOL isPausedManually;
@property (nonatomic) BOOL isDeleteAllSegment;
@property (nonatomic) BOOL isMultiScanBgVideoType;
@property (nonatomic) BOOL isFinishTakePicture;
@property (nonatomic) BOOL isVideoControlSuccessing;
@property (retain, nonatomic) ACCRecordMode *currentCameraMode;
@property (copy, nonatomic) id /* block */ didPlayToEndBlock;

+ (void)requestAVAssetFromiCloudWithModel:(id)a0;

- (void)setBGVideoWithVideoURL:(id)a0 key:(id)a1 rate:(float)a2 completeBlock:(id /* block */)a3 didPlayToEndBlock:(id /* block */)a4;
- (void)setBGVideoAutoRepeat:(BOOL)a0;
- (void)resetBGVideo;
- (void)bgVideoPlay;
- (void)bgVideoPause;
- (void)bgVideoMutePlayer:(BOOL)a0;
- (void)bgVideoSeekToPercent:(float)a0 completeBlock:(id /* block */)a1;
- (void)bgVideoChangeRate:(float)a0 completeBlock:(id /* block */)a1;
- (BOOL)bgVideoIsPlaying;
- (void)bgVideoRestart;
- (void)cameraSpeedDidChange:(double)a0;
- (void)containerViewControllerDidAppear;
- (void)applyVideoBGToCamera:(id)a0;
- (void)cameraDidStopCapture;
- (void)cameraDidStartCapture;
- (void)cameraDidPauseCapture;
- (void)cameraRecordModeChange:(id)a0;
- (void)stickerWillApply:(id)a0;
- (void)containerViewControllerWillDisAppear;
- (void)cameraLastSegmentDidDeleted;
- (void)cameraAllSegmentDidDeleted;
- (void)setVideoBGCamera:(id)a0;
- (BOOL)needPlayBgVideo;
- (BOOL)needPauseWithCurrentMode;
- (void)resetVideoBGCamera;
- (void)guardBGVideoStickerApplied:(id /* block */)a0;
- (id)currentWrapApplyVideoBGUrl;
- (void)bgVideoCurrentPlayPercent:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
