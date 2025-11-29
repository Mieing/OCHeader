@class UIViewController, NSMutableDictionary, NSString, NSDictionary, NSDate, SKOverlay;

@interface AWEUGSKOverlayManager : NSObject <SKOverlayDelegate>

@property (retain, nonatomic) SKOverlay *currentOverlay;
@property (retain, nonatomic) NSMutableDictionary *overlayDict;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isOpenStore;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long skOverlyLifeCycle;
@property (nonatomic) long long retryCount;
@property (weak, nonatomic) UIViewController *currentController;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) NSString *currentAppID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *viewStartTime;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)resetSKOverlayActionState;
- (void)handleOverlayEvent:(id)a0;
- (void)resetBoolValue;
- (BOOL)dismissSKOverlay:(id)a0;
- (void)addSKOverlayActionNotifications;
- (void)removeSKOverlayActionNotifications;
- (void)showSKOverlay;
- (void)notifySkOverlayUserAction:(unsigned long long)a0;
- (void)trackSKCancel:(id)a0 appId:(id)a1 enterFrom:(id)a2 logExtra:(id)a3;
- (id)merge:(id)a0 withExtra:(id)a1;
- (id)preloadSKOverlayWithAppID:(id)a0 config:(id)a1;
- (void)trackSKException:(id)a0 logExtra:(id)a1;
- (void)updateSKOverlayLifeCycle:(unsigned long long)a0 extra:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })skOverlay:(id)a0 willShowEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })skOverlay:(id)a0 finishShowEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)trackSKChangeLifeCycle:(unsigned long long)a0 logExtra:(id)a1;
- (void)trackSKAction:(unsigned long long)a0 logExtra:(id)a1;
- (id)descriptionForLifecycle:(unsigned long long)a0;
- (id)descriptionForAction:(unsigned long long)a0;
- (unsigned long long)bugfixStrategy;
- (void)openSKOverlayWithPreload:(id)a0 enterFrom:(id)a1 config:(id)a2 logExtra:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)storeOverlay:(id)a0 willStartPresentation:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)storeOverlay:(id)a0 willStartDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;

@end
