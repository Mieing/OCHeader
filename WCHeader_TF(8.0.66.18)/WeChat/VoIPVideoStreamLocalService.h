@class NSString, NSRecursiveLock;

@interface VoIPVideoStreamLocalService : MMUserService <VoIPCanvasPlugin, VoIPPIPServiceExt, IVOIPExt, VOIPMgrObserver, VoipUIManagerExt, VoIPilinkMgrVideoStreamObserver, MMServiceProtocol> {
    struct __CVBuffer { } *_pixelBuffer;
    struct __CVBuffer { } *_YMetalTexture;
    struct __CVBuffer { } *_UVMetalTexture;
}

@property (nonatomic) BOOL isWorking;
@property (nonatomic) BOOL isTalking;
@property (nonatomic) unsigned long long bufferWidth;
@property (nonatomic) unsigned long long bufferHeight;
@property (nonatomic) BOOL isLocalCaptureBack;
@property (retain, nonatomic) NSRecursiveLock *releaseRecursiveLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releasePixelBufferOnBlock:(id /* block */)a0;
- (void)clearPixelBufferWhenInDealloc:(BOOL)a0;
- (void)clearPixelBuffer;
- (void)clearTexture;
- (void)clearTextureByCanvasQueueWhenInDealloc:(BOOL)a0;
- (void)open;
- (void)recievePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)closeWhenInDealloc:(BOOL)a0;
- (void)close;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)UIManagerWillOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 monoMsg:(id)a2 startInApp:(BOOL)a3 isEarMode:(BOOL)a4 isAudioMode:(BOOL)a5 from:(unsigned long long)a6 isIlink:(BOOL)a7;
- (void)UIManagerDidClose;
- (void)OnHangup:(id)a0;
- (void)OnBeHanguped:(id)a0;
- (void)OnBeginTalk:(id)a0;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceEnterForeground:(BOOL)a0;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)canvasWillRender:(id)a0;
- (void)canvas:(id)a0 didRenderWithIsSucceed:(BOOL)a1;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)a0;
- (void)canvas:(id)a0 customizeRenderCommandEncoder:(id)a1 withIndex:(unsigned long long)a2;
- (void)onVoIPExtLocalCaptureToggleWithIsBack:(BOOL)a0;
- (void)VOIPMgrDidReceiveLocalPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)VOIPMgrDidReceiveRemotePixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)shouldIgnoreDefaultRender;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void).cxx_destruct;

@end
