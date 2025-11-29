@class NSRecursiveLock, NSString, AVVideoDevice, MMConfSDKVideoHWenc;
@protocol ChatbotVideoUnitDelegate;

@interface ChatbotVideoUnit : NSObject <AVVideoDeviceDelegate, AVVideoDeviceSessionDelegate, AVVideoDataSource, MMConfSDKVideoHWencDelegate> {
    char *cameraBuf;
    int cameraBufSize;
    int _capW;
    int _capH;
    int _encStatusList[1];
    MMConfSDKVideoHWenc *_hwEncoderList[1];
    BOOL _isHW2SW_encode[1];
    int _hwEncStatus;
    struct __CVBuffer { } *_clippedPixelBuffer;
    int _lastVideoPlaneWidth;
    int _lastVideoPlaneHeight;
    int _encW;
    int _encH;
    BOOL _isSWEncUsing;
}

@property (retain, nonatomic) AVVideoDevice *m_videoDevice;
@property (weak, nonatomic) id<ChatbotVideoUnitDelegate> delegate;
@property (retain, nonatomic) NSRecursiveLock *m_videoEncLock;
@property (nonatomic) unsigned long long hasPushFrameCount;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long photoTimeStamp;
@property (retain, nonatomic) NSString *seiInfo;
@property (nonatomic) BOOL isFrontCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetFrameIntoImage:(char *)a0 isFrontCamera:(BOOL)a1;
+ (id)mirrorImageHorizontally:(id)a0;

- (id)initWithDelegate:(id)a0;
- (void)startVideoDevice:(unsigned int)a0;
- (void)stopVideoDevice:(unsigned int)a0;
- (void)releaseResource;
- (void)doQosCtrl:(unsigned int)a0 height:(unsigned int)a1 scene:(unsigned int)a2;
- (int)sendVideoData:(char *)a0 width:(unsigned int)a1 height:(unsigned int)a2 scene:(unsigned int)a3;
- (unsigned int)changeOrientationIntoRemoteRotateDegree;
- (id)genSEIString:(unsigned int)a0;
- (id)getSEIDataForPhoto;
- (void)onFlipCamera;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)a0;
- (void)videoDeviceCameraFront:(id)a0;
- (void)videoDeviceCameraBack:(id)a0;
- (void)videoDevice:(id)a0 updateFilterSetting:(id)a1 fromABTest:(BOOL)a2;
- (void)videoDevice:(id)a0 didChangeRotation:(int)a1;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)videoDevice:(id)a0 didOutputPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)VideoDevPutData:(int)a0 frmData:(char *)a1 frmIndex:(unsigned long long)a2 imageWidth:(unsigned int)a3 imageHeight:(unsigned int)a4 rgbaTexture:(id)a5 auxiliaryInfo:(id)a6;
- (int)GetFrmType;
- (void)didPushFrame;
- (int)gotEncodedData:(id)a0 isKeyFrame:(BOOL)a1 codecType:(int)a2 encIdx:(int)a3 isScreen:(BOOL)a4;
- (int)gotXpsData:(id)a0 codecType:(int)a1 encIdx:(int)a2 isScreen:(BOOL)a3;
- (int)gotEncodeErrCode:(int)a0 encIdx:(int)a1;
- (void).cxx_destruct;

@end
