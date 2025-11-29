@class NSString, BDCTVideoRecorder, NSData, FaceLiveModule, FaceLiveViewController, NSMutableArray;

@interface VideoLivenessTC : LivenessTC {
    BDCTVideoRecorder *_srcVideoRecorder;
    NSString *_recordTimeStamp;
    BOOL _srcVideoWritten;
    id /* block */ delayStopVideoBlock;
    id /* block */ delayNumberBlock;
}

@property (retain, nonatomic) FaceLiveModule *faceliveInstance;
@property (nonatomic) int prevMotion;
@property (nonatomic) int frameCount;
@property BOOL isDetecting;
@property BOOL mCanUpload;
@property (nonatomic) long long interruptTimes;
@property (weak, nonatomic) FaceLiveViewController *faceVC;
@property (nonatomic) long long lastTipsTime;
@property (nonatomic) int interruptTime;
@property (nonatomic) long long startTime;
@property long long recordState;
@property (copy, nonatomic) NSString *readNumber;
@property long long curNumIndex;
@property (retain, nonatomic) NSMutableArray *promptRecordArray;
@property (retain, nonatomic) NSData *faceImageData;
@property (retain, nonatomic) NSData *faceWithEnvImageData;
@property (nonatomic) int algoErrorCode;

- (void)stopRecord:(BOOL)a0;
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
- (id)getLivenessErrorMsg:(int)a0;
- (void)recordSrcVideo:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)packSDKData:(BOOL)a0;
- (void)startRecord:(int)a0 height:(int)a1;
- (void)generateDCTimeStampFilePath;
- (void)showNumnber;
- (void)stopNumber;
- (void)deleteVideo:(id)a0;
- (void).cxx_destruct;
- (void)upload;

@end
