@class NSString, IESLiveGameInteractStickerImpl;

@interface AWELivePreStreamGameInteractStickerElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber, AWELivePreStreamSEISubscriber, IESLiveRevenueInteractAction, AWELivePreStreamEnterRoomDataProvider>

@property (retain, nonatomic) IESLiveGameInteractStickerImpl *stickerImpl;
@property (copy, nonatomic) id /* block */ stickerViewUpdateHandler;
@property (nonatomic) BOOL isObservingSEI;
@property (nonatomic) BOOL stickerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)onUserQuitLiveRoom:(id)a0;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)registerMessage;
- (void)unregisterMessage;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)onReceiveSEI:(id)a0;
- (BOOL)stickerEnable;
- (BOOL)p_preloadStickerEnable;
- (void)createImpl;
- (id)p_iesRoom;
- (BOOL)p_enterRoomDataEnable;
- (void)restImpl;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeSEIObserver;
- (void)removeRenderFrameUpdateObserver;
- (id)p_stickerConfig;
- (void)observeRenderFrameUpdate;
- (void)observeSEI;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
