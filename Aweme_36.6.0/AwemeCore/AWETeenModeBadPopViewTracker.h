@class NSString, NSMutableArray;

@interface AWETeenModeBadPopViewTracker : NSObject

@property (nonatomic) BOOL isTracking;
@property (copy, nonatomic) NSString *enterTeenModeTime;
@property (retain, nonatomic) NSMutableArray *aspSubviewTokenArr;
@property (retain, nonatomic) NSMutableArray *aspWebviewTokenArr;

+ (id)p_settingsConfig;
+ (id)p_alertManagerWhiteList;
+ (id)p_alertManagerBlackList;
+ (BOOL)p_monitorEnable;
+ (id)p_remoteToVCWhiteList;
+ (id)p_remoteToVCBlackList;
+ (id)p_remoteSubViewsWhiteList;
+ (id)p_remoteNewWindowWhiteList;
+ (id)p_remoteNewWindowBlackList;
+ (BOOL)p_newWindowMonitorEnable;
+ (BOOL)p_subviewsMonitorEnable;
+ (BOOL)p_VCTransitionMonitorEnable;
+ (BOOL)p_addSubviewsMonitorEnable;
+ (id)p_enterTeenAddSubViewHookList;
+ (id)teenBadPopviewDefaultConfig;
+ (BOOL)p_alertMonitorEnable;
+ (id)p_premainAddSubViewHookList;
+ (double)p_subviewsMonitorInterval;

- (void)changeTrackerStatusForTeenModeEnable:(BOOL)a0;
- (void)viewControllerDidFinishTransition:(id)a0;
- (void)p_viewControllerDidFinishTransition:(id)a0;
- (void)p_startMonitor;
- (void)p_stopMonitor;
- (id)idetifierStringForBDX:(id)a0;
- (id)p_localToVCWhiteList;
- (void)p_slardarEventReportOfService:(id)a0 info:(id)a1 scene:(id)a2 extra:(id)a3;
- (void)p_slardarUserExceptionReportWithBacktrace:(id)a0 info:(id)a1;
- (void)p_trackNewWindowVisibleScene:(id)a0;
- (id)p_localSubViewsWhiteList;
- (id)p_descriptionForUI:(id)a0;
- (id)p_localNewWindowWhiteList;
- (BOOL)p_checkIsPresentedAlertControllerWindow:(id)a0;
- (id)p_descriptionForAWEUIAlertView:(id)a0;
- (id)p_descriptionForUIAlertController:(id)a0;
- (void)p_monitorAddSubviewsScene;
- (void)p_windowDidBecomeVisible:(id)a0;
- (void)p_checkOnceWhenEnterTeenMode;
- (void)p_addAddSubViewHooks;
- (void)p_addWebViewHooks;
- (void)removeAspObserve;
- (BOOL)p_webMonitorConfigEnable;
- (void)p_handleWebInterceptorWithBDKitView:(id)a0 urlString:(id)a1;
- (BOOL)p_webMonitorConfigOpenBlackIntercept;
- (BOOL)p_hitWebViewURLBlackListWithURL:(id)a0;
- (BOOL)p_hitWebViewURLWhiteListWithURL:(id)a0;
- (id)p_webMonitorConfigWebUrlBlackList;
- (id)p_webMonitorConfigWebUrlWhiteList;
- (id)p_webMonitorConfig;
- (void).cxx_destruct;

@end
