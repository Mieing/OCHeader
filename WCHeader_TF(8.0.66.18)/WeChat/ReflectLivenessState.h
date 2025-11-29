@class YTFaceHandle, NSString, UIColor, AVCaptureSession, YtTimerCounter, NSMutableArray, AVCaptureDevice;

@interface ReflectLivenessState : BaseState <YTAGReflectDeviceDelegate> {
    struct YTFullPack { struct YTDataPack { struct vector<YTRawImgData, std::allocator<YTRawImgData>> { struct YTRawImgData *__begin_; struct YTRawImgData *__end_; struct __compressed_pair<YTRawImgData *, std::allocator<YTRawImgData>> { struct YTRawImgData *__value_; } __end_cap_; } VideoData; long long BeginTime; long long ChangePointTime; struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } ChangePointTimeList; float OffsetSys; int config_begin; int frameNum; int LandMarkNum; int width; int height; char *log; char *SeqID; char *version; struct vector<RawYuvData, std::allocator<RawYuvData>> { struct RawYuvData *__begin_; struct RawYuvData *__end_; struct __compressed_pair<RawYuvData *, std::allocator<RawYuvData>> { struct RawYuvData *__value_; } __end_cap_; } yuvDatas; } AGin; struct YTCAPTCHA { int fixedInterval; int unit; int rand_shift; int rand_inv; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } intervals; char *SeqID; } CP; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } SingleImg_buffer; } pack;
    UIColor *originShapeColor;
    AVCaptureDevice *inputCamera;
    AVCaptureSession *captureSession;
    int poseType;
    BOOL needLocalConfig;
    int stableFrameCount;
    int originDetectInterval;
    int randomChangePointNum;
    NSString *randomExtraConfig;
    BOOL needRandomFlag;
    BOOL needForcePoseCheckFlag;
    YtTimerCounter *tipsTimeCounter;
    NSString *controlConfig;
    double originBrightness;
    int actReflectMode;
    int reflectImagesShortenStrategy;
}

@property (retain, nonatomic) YTFaceHandle *faceHandle;
@property (nonatomic) int continuousPassCount;
@property (retain, nonatomic) NSMutableArray *currentFacePoints;
@property (retain, nonatomic) NSString *mRgbConfig;
@property (nonatomic) float lux;
@property (nonatomic) unsigned long long curState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)unload;
- (void)onPause;
- (void)enter;
- (void)reset;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 withTimeStamp:(unsigned long long)a1;
- (void)sendUIEventWithValue:(id)a0 withType:(id)a1;
- (void)sendUIEventWithLight:(double)a0 withColor:(unsigned int)a1;
- (void)sendCameraEvent:(id)a0;
- (void)stopCamera;
- (void)startRelfect;
- (void)changeToState:(unsigned long long)a0;
- (void)resetParam;
- (void)resetCountDown;
- (void)setCameraSettings:(long long)a0 iso:(int)a1;
- (id)getCaptureDevice;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
