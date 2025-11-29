@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface AWEApplogDynamicFreqEarlyConsumeStrategy : AWEApplogDynamicFreqStrategy <AWEGokuPluginTargetProtocol>

@property (nonatomic) long long consumeVideoCount;
@property (nonatomic) double launchTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) long long validVideoCount;
@property (nonatomic) double validTimeInterval;
@property (nonatomic) double timerPollInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playWith:(id)a0;
- (void)onStrategyInit;
- (id)initWithStrategyName:(id)a0 config:(id)a1 delegate:(id)a2;
- (void)startTimerPolling;
- (void)updateValidState;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;

@end
