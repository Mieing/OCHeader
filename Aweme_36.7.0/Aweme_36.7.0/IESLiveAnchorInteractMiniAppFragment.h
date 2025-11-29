@class IESLiveInteractPluginRequestApi, NSMutableDictionary, NSString, IESLiveAnchorInteractMiniAppComponentView, IESLiveAnchorInteractiveGameItem;
@protocol IESLiveTimorService;

@interface IESLiveAnchorInteractMiniAppFragment : IESLiveRoomComponent <IESLiveSocialInteractAction, IESLiveAnchorRoomStatusChangeEvents, HTSLiveMessageSubscriber, IESLiveAnchorInteractPluginService>

@property (retain, nonatomic) IESLiveAnchorInteractMiniAppComponentView *miniAppView;
@property (retain, nonatomic) IESLiveInteractPluginRequestApi *requestApi;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *interactItem;
@property (retain, nonatomic) NSMutableDictionary *miniAppDict;
@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *contactId;
@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) BOOL pluginIsCreated;
@property (retain, nonatomic) NSMutableDictionary *inUsePluginDict;
@property (nonatomic) double startUseTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maximumDragableRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)stopAnchorLive;
- (id)getCommonMonitorParams;
- (void)recordToolUsageWith:(id)a0 use:(BOOL)a1;
- (BOOL)openInteractPluginSchema:(id)a0 item:(id)a1;
- (void)exitInteractPlugin;
- (id)getCurrentInUseInteractPlugin;
- (void)handleInteractPluginWhenResumeLive;
- (void)createLiveCardHandler:(id /* block */)a0 params:(id)a1;
- (void)closeLiveCardHandler:(id /* block */)a0 params:(id)a1;
- (void)hideLiveCardHandler:(id /* block */)a0 params:(id)a1;
- (void)showLiveCardHandler:(id /* block */)a0 params:(id)a1;
- (void)updateLiveCardHandler:(id /* block */)a0 params:(id)a1;
- (void)subscribeLiveInteractPluginMessageHandler:(id /* block */)a0 params:(id)a1;
- (void)unSubscribeLiveInteractPluginMessageHandler:(id /* block */)a0 params:(id)a1;
- (void)getOpenRoomDataHandler:(id /* block */)a0 params:(id)a1;
- (void)getLiveRoomInfoHandler:(id /* block */)a0 params:(id)a1;
- (void)callOpenLiveDataHandler:(id /* block */)a0 params:(id)a1;
- (void)uploadInteractToolInfoHandler:(id /* block */)a0 params:(id)a1 appId:(id)a2;
- (void)loadLiveCard:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)reportInteractPluginUse;
- (void)trackAnchorInteractiveExtensionUse:(id)a0;
- (void)reportAnchorFormatMonitor:(id)a0 category_1:(id)a1 category_2:(id)a2 errorMsg:(id)a3;
- (id)buildInteractPluginErrorCode:(long long)a0 errorNo:(long long)a1 errorType:(id)a2 errorMsg:(id)a3;
- (void)trackAnchorInteractiveExtensionOver:(id)a0;
- (BOOL)validateMethodForOpenLiveData:(id)a0;
- (void)filtereInteractionPluginMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
