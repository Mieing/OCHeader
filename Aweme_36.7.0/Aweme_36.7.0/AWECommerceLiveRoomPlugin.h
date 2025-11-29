@class NSString, BDADPreviewToRoomModel, NSMutableSet, BDLiveCommerceFragment, BDADLiveRoomWindmillPlugin;

@interface AWECommerceLiveRoomPlugin : NSObject <AWELiveCommercialRouter, IESLiveMessageSubscriber, BDADLiveRoomPlugin>

@property (retain, nonatomic) NSMutableSet *openURLHistory;
@property (weak, nonatomic) BDADLiveRoomWindmillPlugin *windmillPlugin;
@property (retain, nonatomic) BDADPreviewToRoomModel *modelToLiveRoom;
@property (weak, nonatomic) BDLiveCommerceFragment *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)showAlertOpenOtherWithAdInfo:(id)a0 openURL:(id)a1 actionHandler:(id /* block */)a2;
- (BOOL)routeToWebURL:(id)a0 playableURLIfNeed:(id)a1 adInfo:(id)a2 queries:(id)a3;
- (BOOL)routeToLynxURL:(id)a0 adInfo:(id)a1 queries:(id)a2;
- (void)addNotifications;
- (BOOL)isCommercialComponentInToolbar;
- (void)addMessages;
- (void)postLiveLandingPageUpdateNotification:(id)a0;
- (void)handleIronManURLLandingEventNotification;
- (void)handleClearNotification:(id)a0;
- (void)handlePlayableLandingPageOpenAppStoreNotification;
- (void)handleLiveCardRenderFinishNotification:(id)a0;
- (void)handleLiveLandingPageLoadFailNotification:(id)a0;
- (void)handleLiveLandingPageLoadSucceedNotification:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
