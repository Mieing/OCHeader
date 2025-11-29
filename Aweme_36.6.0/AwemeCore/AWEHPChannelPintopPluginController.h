@class NSTimer, NSString, NSDate;
@protocol AWEHPChannelControllerProtocol, AWEHPChannelProtocol;

@interface AWEHPChannelPintopPluginController : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (nonatomic) BOOL isTiming;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;
@property (nonatomic) long long triggerTime;
@property (weak, nonatomic) id<AWEHPChannelProtocol> channel;
@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) BOOL coldLaunchOpt;
@property (nonatomic) long long allowInjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;
+ (BOOL)pinTopAllowInjectToChannel:(id)a0;

- (void)channelTopTabDidSelect;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTopTabDidUnSelect;
- (void)addNotifications;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)p_beginPinTop;
- (void)p_endPinTop;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)appDidEnterBackground:(id)a0;
- (void)pauseTimer;
- (void)removeNotifications;
- (void)appWillEnterForeground:(id)a0;
- (void)resumeTimer;
- (id)initWithChannel:(id)a0;

@end
