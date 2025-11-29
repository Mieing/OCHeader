@class NSTimer, NSMutableDictionary;

@interface AWEUGDetectAppService : NSObject

@property (retain, nonatomic) NSMutableDictionary *detectMap;
@property (retain, nonatomic) NSTimer *timer;

+ (id)merge:(id)a0 withExtra:(id)a1;
+ (id)sharedInstance;

- (void)invalidTimer;
- (void)detectDownloadStatusForDetectId:(id)a0 enterFrom:(id)a1 pageName:(id)a2 logExtra:(id)a3;
- (void)handleDetectReject:(id)a0 detectId:(id)a1 enterFrom:(id)a2 pageName:(id)a3 logExtra:(id)a4;
- (BOOL)enableAppDownloadDetect;
- (id)schemeWhiteList;
- (double)timerOutInterval;
- (double)timerLoopInterval;
- (void)checkAppWithInstallHandler:(id /* block */)a0 timeOutHandler:(id /* block */)a1;
- (id)appDownloadDetectSettings;
- (void).cxx_destruct;
- (void)startTimer;
- (double)currentTime;
- (void)updateTimer;

@end
