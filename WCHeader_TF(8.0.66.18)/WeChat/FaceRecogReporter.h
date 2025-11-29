@class FaceRecogReporterFaceTimeMeter, NSString, FaceRecogReporterFaceErrCounter, NSMutableArray;

@interface FaceRecogReporter : MMObject {
    unsigned long long frReportSessionId;
}

@property (retain, nonatomic) NSMutableArray *stateList;
@property (nonatomic) long long finalState;
@property (retain, nonatomic) NSMutableArray *sdkStateList;
@property (retain, nonatomic) FaceRecogReporterFaceTimeMeter *timeMeter;
@property (retain, nonatomic) FaceRecogReporterFaceErrCounter *errCounter;
@property (nonatomic) unsigned int bizType;
@property (nonatomic) unsigned int tryCount;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *funName;
@property (nonatomic) BOOL needUploadVideo;
@property (nonatomic) float brightnessValue;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned int checkAliveType;
@property (nonatomic) BOOL isFaceRecogForPay;
@property (nonatomic) long long livenessType;
@property (nonatomic) long long resetCount;
@property (nonatomic) long long cdnErrorCode;
@property (nonatomic) long long prepareErrorCode;
@property (nonatomic) long long configErrorCode;
@property (nonatomic) long long verifyErrorCode;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSString *bioId;
@property (nonatomic) long long interruptShow;
@property (nonatomic) long long interruptAction;
@property (nonatomic) long long interruptShowOtherverifyTitle;
@property (nonatomic) long long voiceOverState;
@property (nonatomic) long long faceRecogTime;

+ (void)reportFaceDetectVideoUploadResult:(id)a0 errorType:(unsigned int)a1 errorCode:(unsigned int)a2;
+ (int)getReportScene:(unsigned int)a0;
+ (int)convertClientCodeToReportCode:(long long)a0;

- (id)init;
- (void)reportStartFaceDetect:(BOOL)a0;
- (void)reportFaceDetectResult:(unsigned int)a0 errorType:(unsigned int)a1 errorCode:(unsigned int)a2;
- (void)reportInterfaceCalledResult:(unsigned int)a0;
- (void)recordState:(long long)a0;
- (void)recordSDKStateChange:(id)a0;
- (void)reportFlashWithReportCode:(int)a0;
- (void)reportFlashWithReportCode:(int)a0 errMsg:(id)a1;
- (void)reportFlashLogStr:(id)a0;
- (long long)categoryForResultCode:(int)a0;
- (void)reportInterrupt;
- (void).cxx_destruct;

@end
