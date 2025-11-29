@class NSString, WCFPSMonitorPlugin, WCFPSMonitorConfig;

@interface MMFPSMonitor : MMRootService <MMUIViewControllerExt, IExptServiceExt, WCFPSMonitorPluginDelegate, MMServiceProtocol> {
    WCFPSMonitorPlugin *m_plugin;
    WCFPSMonitorConfig *m_configForScroll;
    WCFPSMonitorConfig *m_configForPreScroll;
    WCFPSMonitorConfig *m_configForTransition;
    unsigned long long m_trackingType;
    NSString *m_scene;
    long long m_threshold;
    double m_hitchRate;
    double m_hangTime;
    double m_scrollScore;
    unsigned long long m_eventTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setupReportStrategy;
- (void)setupPluginConfiguration;
- (void)updatePluginConfiguration;
- (BOOL)isFlameGraphTracing;
- (BOOL)isFPSMonitorDisable;
- (void)setFPSMonitorDisable:(BOOL)a0;
- (double)hitchRate;
- (void)resetHitchRate;
- (double)hangTime;
- (void)resetHangTime;
- (double)scrollScore;
- (void)resetScrollScore;
- (void)setEventTag:(unsigned long long)a0;
- (void)resetEventTag;
- (void)handleUIApplicationWillResignActiveNotification:(id)a0;
- (void)handlePerfWarningNotification:(id)a0;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)onUITrackingRunLoopEntry;
- (void)onUITrackingRunLoopExit;
- (void)onSendEvent:(id)a0;
- (void)onPreScrollEnd;
- (BOOL)shouldPrintViewTreeWithDuration:(double)a0;
- (void)onFPSMonitorPluginReport:(id)a0 trackingType:(unsigned long long)a1 totalTime:(double)a2 hitchRate:(double)a3 scrollScore:(double)a4 scene:(id)a5;
- (void)onFPSMonitorPluginReport:(id)a0 trackingType:(unsigned long long)a1 preScrollTime:(double)a2 scene:(id)a3;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
