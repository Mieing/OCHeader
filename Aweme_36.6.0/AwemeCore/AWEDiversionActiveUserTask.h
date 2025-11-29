@class NSString, NSTimer, AWEDiversionTimerInfo, UIView;
@protocol AWEUGCountDownViewProtocol, AWEUGTimeMeterTaskProtocol;

@interface AWEDiversionActiveUserTask : NSObject <AWEDiversionActiveUserTaskProtocol>

@property (retain, nonatomic) AWEDiversionTimerInfo *timerInfo;
@property (weak, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIView<AWEUGCountDownViewProtocol> *pendantView;
@property (nonatomic) BOOL needWaitDismiss;
@property (retain, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)taskKey;
- (id)taskToken;
- (void)startTimerIfNeeded:(double)a0;
- (void)handleAppDidBecomeActive;
- (void)setupPendant:(id)a0;
- (void)timeFired:(id)a0;
- (void)reloadTimerService;
- (id)countDownTaskConfig;
- (void)getVideoTaskInfo:(id)a0 completion:(id /* block */)a1;
- (void)setPendantViewFinish;
- (void)cleanTask;
- (void)uploadActTime:(id)a0 recordTime:(double)a1 completion:(id /* block */)a2;
- (void)restartWithCrossToken:(id)a0 completion:(id /* block */)a1;
- (void)didTaskUpdateWithProgress:(double)a0;
- (void)taskDidFinished;
- (void).cxx_destruct;
- (id)init;
- (id)taskID;
- (void)dealloc;
- (void)handleAppWillResignActive;

@end
