@class NSTimer, NSString;
@protocol AWEFastSpeedControllerProtocol;

@interface AWELPPToSpeedControlViewModel : NSObject <AWELPPToSpeedControlViewModelProtocol>

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double timerStep;
@property (nonatomic) double enterTimeThreshold;
@property (nonatomic) double timeCounter;
@property (nonatomic) double progress;
@property (nonatomic) long long state;
@property (nonatomic) long long tipsMaxTimes;
@property (copy, nonatomic) id /* block */ toSpeedControlCallbackBlock;
@property (weak, nonatomic) id<AWEFastSpeedControllerProtocol> speedController;
@property (readonly, nonatomic) BOOL shouldShowTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enable;

- (void)handleBeginWithToSpeedControl:(id /* block */)a0;
- (void)markTipsDidShow;
- (void)beginCountdown;
- (void)cancelCountdown;
- (void)onCountdownTimerAction:(id)a0;
- (void)config;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)handleLongPressGesture:(id)a0;
- (void)handleCancel;
- (void)handleReady;

@end
