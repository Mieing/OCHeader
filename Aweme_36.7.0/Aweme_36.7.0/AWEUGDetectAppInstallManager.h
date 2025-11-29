@class NSTimer, AWEUGDetectAppInstallModel;

@interface AWEUGDetectAppInstallManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long startTime;
@property (nonatomic) long long detectCount;
@property (retain, nonatomic) AWEUGDetectAppInstallModel *model;

+ (long long)currentTime;

- (double)timerLoopInterval;
- (id)appDownloadDetectSettings;
- (void)onTimerDidUpdated;
- (void)invalidTimerIfNeeded;
- (void)sendPushIfNeeded:(long long)a0 completion:(id /* block */)a1;
- (void)openAppIfNeeded:(long long)a0 completion:(id /* block */)a1;
- (void)invalidDetectManagerWithReason:(long long)a0;
- (double)timerDetectCount;
- (void)reportSendPush:(long long)a0 succeed:(BOOL)a1;
- (void)detectDownloadStatusWithModel:(id)a0;
- (void).cxx_destruct;
- (id)managerIdentifier;

@end
