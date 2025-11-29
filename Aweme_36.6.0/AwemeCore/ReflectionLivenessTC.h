@class ReflectionLiveness, NSData, FaceLiveViewController, NSMutableArray;

@interface ReflectionLivenessTC : LivenessTC

@property (retain, nonatomic) ReflectionLiveness *faceliveInstance;
@property (nonatomic) int prevMotion;
@property (nonatomic) int frameCount;
@property (retain, nonatomic) NSMutableArray *promptInfoArray;
@property (retain, nonatomic) NSMutableArray *colorArray;
@property (nonatomic) unsigned long long lastPromptInfoArrayCount;
@property (nonatomic) long long interruptTimes;
@property (nonatomic) double prevPro;
@property BOOL isDetecting;
@property (weak, nonatomic) FaceLiveViewController *faceVC;
@property (nonatomic) struct ReflectionLiveInfo { int category; int time_remaind; int status; int state_machine_stage; int detect_result_code; int light; float process; } lastInfo;
@property (nonatomic) long long lastTipsTime;
@property (retain, nonatomic) NSData *faceImageData;
@property (retain, nonatomic) NSData *faceWithEnvImageData;
@property (nonatomic) int algoErrorCode;

- (id)initWithVC:(id)a0;
- (int)setInitParams:(id)a0;
- (int)setParamsGeneral:(int)a0 value:(float)a1;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 orient:(int)a1;
- (void)setMaskRadiusRatio:(float)a0 offsetToCenterRatio:(float)a1;
- (void)reStart:(int)a0;
- (void)trackCancel;
- (void)viewDismiss;
- (int)getAlgoErrorCode;
- (id)getLivenessErrorTitle:(int)a0;
- (id)packSDKData:(BOOL)a0;
- (void).cxx_destruct;

@end
