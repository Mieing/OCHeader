@class RTVXRRoomClockCorrectorContext, NSString, RxScheduler, RTVXRRoomClockCorrectTask, RTVXRRoomClockCorrectSettings;
@protocol RTVUserProfileManagerInterface, RTVXRRoomClockCorrectorDelegate, RxInjector, RTVXRControllerInjector, RTVXRMonitor, RTVXRRoomMessageSender;

@interface RTVXRRoomClockCorrector : NSObject <RTVXRRoomMessageSenderObserver>

@property (copy) NSString *targetUserID;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVXRRoomClockCorrectSettings *settings;
@property (readonly, nonatomic) id<RTVXRMonitor> monitor;
@property (readonly, nonatomic) RTVXRRoomClockCorrectorContext *context;
@property (retain) RTVXRRoomClockCorrectTask *currentCorrectTask;
@property (retain) RTVXRRoomClockCorrectTask *bestCorrectTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) long long requestTimes;
@property (nonatomic) long long requestRounds;
@property (nonatomic) long long timeoutRetryCount;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<RTVXRRoomClockCorrectorDelegate> delegate;
@property (readonly, nonatomic) long long clockDiff;
@property (readonly, nonatomic) long long downloadNetworkTime;
@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clockCorrectorRole:(long long)a0 controllerInjector:(id)a1;

- (void)rtv_awakeFromControllerInjector;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (id)timestampSinceTargetUserID;
- (void)invalidateCorrector;
- (id)startCorrectWithTargetUserID:(id)a0;
- (BOOL)__clockCorrectEnable;
- (void)__transferToNextState:(long long)a0;
- (long long)__badDelayOfNetwork;
- (void)__transferFromState:(long long)a0 toState:(long long)a1;
- (long long)__bestDelayOfNetwork;
- (long long)__maxRequestTimes;
- (double)__durationOfHandTimeout;
- (long long)__timeoutRetryMaxCount;
- (double)__durationOfNextTime;
- (double)__durationOfNextRound;
- (void)__didReceiveMessage:(id)a0 fromUserID:(id)a1;
- (void).cxx_destruct;
- (id)initWithRole:(long long)a0;

@end
