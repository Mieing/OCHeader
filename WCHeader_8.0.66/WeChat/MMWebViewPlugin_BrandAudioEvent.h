@class NSString;
@protocol TingApiListSource;

@interface MMWebViewPlugin_BrandAudioEvent : MMWebViewPluginBase <BrandAudioServiceExt, TingApiListSourceListener>

@property (nonatomic) BOOL webPlayerInForeground;
@property (nonatomic) BOOL isObserving;
@property (retain, nonatomic) id<TingApiListSource> currentListSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startObserveStateChange;
- (void)stopObserveStateChange;
- (void)onSetPlayerForegroundState:(BOOL)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onCurrentPlayingListSourceWillChange:(id)a0 nextSource:(id)a1;
- (void)onPlayTaskInfoEvent:(id)a0 event:(int)a1 info:(id)a2;
- (void)notifyOnPlayListRefresh;
- (void)onPlayTaskServiceTingItemUpdated:(id)a0 newItem:(id)a1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)a0;
- (void)onReloadItems:(id)a0;
- (void)onLoadMoreWithDirection:(id)a0 direction:(int)a1;
- (void)onLoadError:(int)a0 reload:(BOOL)a1 errorCode:(int)a2 errorMessage:(id)a3;
- (void)onLoadingStatusChanged:(int)a0 loading:(BOOL)a1;
- (void)onPlayTaskServiceRefresh:(id)a0;
- (void).cxx_destruct;

@end
