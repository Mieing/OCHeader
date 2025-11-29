@class UIViewController, NSMutableDictionary, NSString, NSDate, SKOverlay;

@interface AWEEcomLGSKOverlayManager : NSObject <SKOverlayDelegate>

@property (retain, nonatomic) SKOverlay *currentOverlay;
@property (retain, nonatomic) NSMutableDictionary *overlayDict;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isOpenStore;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasTouchedSKOverlay;
@property (nonatomic) long long retryCount;
@property (weak, nonatomic) UIViewController *currentController;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) NSString *currentAppID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDate *currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)resetSKOverlayActionState;
- (void)handleOverlayEvent:(id)a0;
- (void)handleActiveEvent:(id)a0;
- (void)resetBoolValue;
- (BOOL)dismissSKOverlay:(id)a0;
- (void)addSKOverlayActionNotifications;
- (void)removeSKOverlayActionNotifications;
- (id)preloadSKOverlayWithAppID:(id)a0 position:(long long)a1;
- (void)showSKOverlay;
- (void)openSKOverlayWithPreload:(id)a0 enterFrom:(id)a1 position:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)windowDidResignKey:(id)a0;
- (void)storeOverlay:(id)a0 willStartPresentation:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;

@end
