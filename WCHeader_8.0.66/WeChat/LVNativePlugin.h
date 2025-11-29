@class MegaVideoCommCallback, UIViewController, NSString;

@interface LVNativePlugin : NSObject <MMFlutterPlugin, MegaVideoNativeApi>

@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) MegaVideoCommCallback *commCallbackApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)stopObserveVolumeChangeEvent;
- (void)startObserveVolumeChangeEvent;
- (void)onSystemVolumeDidChange:(id)a0;
- (void)callbackToFlutterVolumeChange:(double)a0;
- (float)volume;
- (void)onMegaVideoCommCallbackWithKey:(id)a0 data:(id)a1;
- (void)openFeedPlayerDetailCheckroomTicket:(id)a0 openParamsBytes:(id)a1 error:(id *)a2;
- (void)openWatchLaterListTicket:(id)a0 error:(id *)a1;
- (void)openKitchenType:(long long)a0 feed:(id)a1 params:(id)a2 error:(id *)a3;
- (id)getInitMainFeedListContextWithError:(id *)a0;
- (void)setOnceOrientationOrientation:(long long)a0 error:(id *)a1;
- (void)didGetGestureEventIsHandled:(BOOL)a0 error:(id *)a1;
- (void)minimizePlayerId:(long long)a0 error:(id *)a1;
- (void)updatePlaySessionIdPlaySessionId:(id)a0 commentscene:(long long)a1 error:(id *)a2;
- (void)showSharePanelFeed:(id)a0 commentscene:(long long)a1 error:(id *)a2;
- (void)showLastExitFeedHintFeed:(id)a0 error:(id *)a1;
- (void)markStarFeed:(id)a0 starContext:(id)a1 commentscene:(long long)a2 snapshotInfo:(id)a3 error:(id *)a4;
- (void)updateStarInfoId:(id)a0 error:(id *)a1;
- (id)isStarredStarId:(id)a0 commentscene:(long long)a1 error:(id *)a2;
- (void)removeStarStarId:(id)a0 commentscene:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
