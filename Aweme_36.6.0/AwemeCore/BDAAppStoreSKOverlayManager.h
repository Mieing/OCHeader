@class SKOverlay, BDAAppStoreDownloadActionModel, NSString;

@interface BDAAppStoreSKOverlayManager : NSObject <SKOverlayDelegate>

@property (retain, nonatomic) SKOverlay *skoverlay;
@property (retain, nonatomic) BDAAppStoreDownloadActionModel *model;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isOpenStore;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL hasTouchedSKOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)skStoreViewDidAppear:(id)a0;
- (void)resetSKOverlayActionState;
- (void)handleOverlayEvent:(id)a0;
- (void)handleActiveEvent:(id)a0;
- (void)rifleViewControllerDidDisappear:(id)a0;
- (void)requestSkOverlayInfoWithModel:(id)a0 completion:(id /* block */)a1;
- (void)resetBoolValue;
- (void)preloadSKOverlayWithDownloadModel:(id)a0 completion:(id /* block */)a1;
- (void)dismissSKOverlay:(id)a0;
- (void)addSKOverlayActionNotifications;
- (void)removeSKOverlayActionNotifications;
- (void)openSKOverlayWithPreload:(id)a0;
- (void)openSKOverlayWithDownloadModel:(id)a0;
- (void)setSkoverlayActionEventBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)windowDidResignKey:(id)a0;
- (void)storeOverlay:(id)a0 willStartPresentation:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)storeOverlay:(id)a0 willStartDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;

@end
