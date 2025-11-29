@interface CJPayAnomalyDetectionManager : NSObject

@property (nonatomic) double enterBackgroundTimeGlobal;

+ (id)sharedInstance;

- (id)getBizParams:(id)a0;
- (void)registerAppLogRunEventCallback;
- (void)screenshotDetected:(id)a0;
- (void)doAnomalyDetection:(id)a0;
- (BOOL)isCJPayNtv;
- (BOOL)isCJPayFE;
- (id)captureScreen;
- (id)generateRandomKeyWithLength:(unsigned long long)a0;
- (id)encryptData:(id)a0 key:(id)a1 iv:(id)a2 error:(id *)a3;
- (BOOL)isBoeEnv;
- (id)ptyAppLogEventParamsWithEvtName:(id)a0 params:(id)a1;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)addNotificationObserver;

@end
