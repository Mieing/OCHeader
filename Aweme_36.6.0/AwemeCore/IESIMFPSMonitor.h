@class IESIMFPSTracker, IESIMFPSMonitorMetrics, CADisplayLink, NSMutableSet, NSString, IESIMFPSMonitorFrame;

@interface IESIMFPSMonitor : NSObject <AWEUserMessage>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastVSyncInterval;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL hitSample;
@property (retain, nonatomic) IESIMFPSTracker *tracker;
@property (retain, nonatomic) NSMutableSet *activeScenes;
@property (nonatomic) BOOL hasActiveScene;
@property (nonatomic) BOOL isAppActive;
@property (nonatomic) unsigned short currentFrameID;
@property (retain, nonatomic) IESIMFPSMonitorMetrics *scrollMetrics;
@property (retain, nonatomic) IESIMFPSMonitorFrame *lastFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)injectEnvBlock:(id /* block */)a0;
- (void)customizeActionTraceTypes:(id)a0;
- (void)onEvent:(long long)a0;
- (void)enterScene:(id)a0;
- (void)leaveScene:(id)a0;
- (void)onActionBegin:(long long)a0;
- (void)onActionEnd:(long long)a0;
- (void)displayLinkDidUpdate:(id)a0;
- (unsigned long long)p_getNowInUS;
- (BOOL)p_canRecordAction;
- (void)p_toggleDisplayLink;
- (void)p_adjustVSyncInterval;
- (void)p_handleScrollMetrics;
- (void)onActionTrait:(long long)a0 traitBlock:(id /* block */)a1;
- (unsigned long long)timePointStart;
- (unsigned long long)timePointEnd:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
