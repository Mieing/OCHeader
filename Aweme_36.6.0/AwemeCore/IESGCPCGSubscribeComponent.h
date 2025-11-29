@class IESGCPXPlayGameAPI, NSString;

@interface IESGCPCGSubscribeComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGSubscribeRouter>

@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) NSString *popID;
@property (copy, nonatomic) NSString *sceneName;
@property (nonatomic) long long source;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) id /* block */ onSubscriptionPanelDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)playInstance:(id)a0 didReceiveServerPushedCustomNotice:(id)a1;
- (void)componentDidAttached;
- (void)showSubscribePanelWithPopID:(id)a0 sceneType:(long long)a1 sceneName:(id)a2 source:(long long)a3;
- (void)showSubscribeGuideAlertWhenExitingIfNeededWithCompletion:(id /* block */)a0;
- (long long)_reportTypeFromSubscriptionEvent:(id)a0 exitMethod:(id)a1;
- (void)_trackSubscriptionEventWithReportType:(long long)a0;
- (void)_notifySubscriptionStatusUpdate:(long long)a0 sceneType:(long long)a1;
- (id)_cardSourceFromSubscriptionSource:(long long)a0;
- (id)_clickResultWithReportType:(long long)a0;
- (void)_showSubscribePanelWithPopID:(id)a0 sceneType:(long long)a1 sceneName:(id)a2 source:(long long)a3 completion:(id /* block */)a4;
- (BOOL)_shouldShowExitGuideSubscribePanel;
- (id)_cacheKeyWithGameID:(id)a0;
- (void)_handleSubscriptionStatusUpdateNotification:(id)a0;
- (BOOL)_isFirstDate:(id)a0 moreThanOneDayLaterThanSecondDate:(id)a1;
- (void)_clear;
- (void).cxx_destruct;
- (void)_removeObserver;
- (void)_addObserver;

@end
