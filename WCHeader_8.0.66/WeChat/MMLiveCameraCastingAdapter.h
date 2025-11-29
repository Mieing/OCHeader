@class NSString, MMConfSDKVideoHWenc;
@protocol MMFinderLiveTaskCameraCastingDelegate;

@interface MMLiveCameraCastingAdapter : MMLiveCaptureAdapter <MMConfSDKVideoHWencDelegate> {
    MMConfSDKVideoHWenc *_hwEncoder;
    unsigned short _frameCnt;
    struct { unsigned short magic_num; unsigned int pkt_len; unsigned short header_len; unsigned char pkt_type; unsigned short type_seq; unsigned char video_direction; } _localDataHeader;
    double _lastLogTime;
    unsigned long long _statsticTotalBytes;
    unsigned int _statsticToatlFrmCnt;
    int _targetBitrate;
    int _bitrateUpLimiter;
    int _bitrateDownLimiter;
    int _currentBitrate;
    BOOL _shouldResetBitrate;
}

@property (weak, nonatomic) id<MMFinderLiveTaskCameraCastingDelegate> castingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertAVCCToAnnexB:(id)a0;

- (void)initEncoderIfNeeded;
- (id)init;
- (void)dealloc;
- (id)initWithEffectManager:(id)a0;
- (void)sendData:(id)a0;
- (id)MuxVideoDataWrap:(id)a0;
- (void)liveManager:(id)a0 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 shouldReportCaptureMetrics:(BOOL)a2;
- (int)gotEncodedData:(id)a0 isKeyFrame:(BOOL)a1 codecType:(int)a2 encIdx:(int)a3 isScreen:(BOOL)a4;
- (int)gotXpsData:(id)a0 codecType:(int)a1 encIdx:(int)a2 isScreen:(BOOL)a3;
- (void).cxx_destruct;

@end
