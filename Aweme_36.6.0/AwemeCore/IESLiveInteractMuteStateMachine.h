@class IESLiveInteractMuteStateMachineConfig, NSMutableArray;
@protocol IESLiveInteractMuteStateMachineDelegate;

@interface IESLiveInteractMuteStateMachine : NSObject

@property (retain, nonatomic) NSMutableArray *operationQueue;
@property (retain, nonatomic) IESLiveInteractMuteStateMachineConfig *config;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long muteReason;
@property (nonatomic) BOOL shouldUnMuteLocalWhenBack;
@property (nonatomic) BOOL shouldShowToastWhenBack;
@property (nonatomic) int silenceStatus;
@property (nonatomic) unsigned long long muteStateBeforeSinging;
@property (nonatomic) BOOL shouldUnMuteSelfForceWhenBack;
@property (nonatomic) double unMatchTimeDuration;
@property (nonatomic) double lastUnMatchTiming;
@property (nonatomic) double totalTime;
@property (weak, nonatomic) id<IESLiveInteractMuteStateMachineDelegate> delegate;

- (void)onReceiveSelfSilenceStatus:(int)a0;
- (void)muteWithState:(unsigned long long)a0;
- (void)unMuteWithState:(unsigned long long)a0;
- (void)muteSelfLocally;
- (void)muteWithState:(unsigned long long)a0 force:(BOOL)a1;
- (void)muteSelfWithResume:(BOOL)a0 completion:(id /* block */)a1;
- (void)unMuteSelfWithEnforced:(BOOL)a0 completion:(id /* block */)a1;
- (void)unMuteWithState:(unsigned long long)a0 force:(BOOL)a1 noRequestOnMuteSelf:(BOOL)a2;
- (void)muteWithState:(unsigned long long)a0 force:(BOOL)a1 noRequestOnMuteSelf:(BOOL)a2;
- (void)startOperateIfNeededWithNewNode:(id)a0;
- (void)p_startOperation;
- (void)p_realMuteWithState:(unsigned long long)a0 force:(BOOL)a1 noRequestOnMuteSelf:(BOOL)a2;
- (void)p_realUnMuteWithState:(unsigned long long)a0 force:(BOOL)a1 noRequestOnMuteSelf:(BOOL)a2;
- (void)finishLatestOperation;
- (void)notificationIfNeededWithSilenceStatus:(int)a0 newState:(unsigned long long)a1;
- (void)statusFixIfNeededWith:(int)a0;
- (void)unMuteSelfLocally;
- (id)logForCurrentState;
- (id)silenceStatusLogStringWithSilenceStatus:(int)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBackground;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
