@class NSString;

@interface WCPIPCustomHandleLogic : NSObject <AVPictureInPictureControllerDelegate>

@property BOOL isSourcePixelBufferChanged;
@property BOOL isAttachWidgetChanged;
@property (nonatomic) BOOL isHandling;
@property (nonatomic) BOOL isRestoreUserInterface;
@property (nonatomic) BOOL isManualFitSize;
@property (nonatomic) BOOL isPlayerAbnormalPaused;
@property (nonatomic) BOOL needClearSrcCompletely;
@property (readonly, nonatomic) BOOL needCollectSrcPixelBuffer;
@property (readonly, nonatomic) BOOL needSaveSrcIfPossible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandle;
- (void)stopHandle;
- (void)attachRenderView:(id)a0;
- (void)updateRenderViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRenderViewFrame;
- (void)handlePixelBufferRefresh:(id)a0;
- (BOOL)enableStartPictureInPicture;
- (struct CGSize { double x0; double x1; })getRenderSize;
- (id)getVideoSrcId;
- (id)getCurrentBusinessId;
- (void)refresh:(id)a0 sourceId:(id)a1;
- (void)clearVideoFrames;
- (void)tagPixelBufferRenderCompleted;
- (void)tagAttachWidgetRenderCompleted;
- (id)currentRenderObjDict;
- (id)currentRenderIdList;
- (BOOL)isRenderObjUnValid:(id)a0;
- (BOOL)isVideoFrameUnValid:(id)a0;
- (BOOL)isRenderIdUnValid:(id)a0;
- (void)checkRenderObjectsValid:(long long)a0;
- (void)destroy;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)onPlayerTimeControlStatusChanged:(long long)a0;
- (void)onBeginRefreshSourcePixel;
- (void)onEndRefreshSourcePixel;
- (void)onBeginRenderPixel;
- (void)onEndRenderPixel;
- (void)onBeginNewRenderBuffer;
- (void)onEndNewRenderBuffer:(struct CGSize { double x0; double x1; })a0;
- (void)onBeginAttachWidgets;
- (void)onEndAttachWidgets:(unsigned long long)a0;
- (void)onBeginRenderBuffer;
- (void)onEndRenderBuffer:(struct CGSize { double x0; double x1; })a0;
- (void)onStartCustomPixelTransfer;
- (void)onStopCustomPixelTransfer;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)startLoading;
- (void)stopLoading;
- (void)onPIPAuthorityOccupied;
- (void)onPIPAuthorityAchieved;
- (BOOL)checkCurrHasPIPAuthority;

@end
