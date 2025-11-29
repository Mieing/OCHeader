@class AWENearbySettingsManager, AWENearbyPageContext, NSString, AWENearbySettingsResponse;
@protocol IESLCMessageHandlerProtocol;

@interface AWENearbyC2TransformerViewModel : AWEBaseViewModel <IESLCMessageHandlerService>

@property (retain, nonatomic) AWENearbySettingsManager *settingsMananger;
@property (retain, nonatomic) AWENearbySettingsResponse *settingResponse;
@property (nonatomic) BOOL isTransformerShow;
@property (nonatomic) double currentDisplayPct;
@property (nonatomic) unsigned long long lastRefreshType;
@property (nonatomic) unsigned long long lastDataType;
@property (nonatomic) BOOL needRefreshByOrder;
@property (nonatomic) BOOL needRefreshBySendLaunchSuccess;
@property (nonatomic) BOOL needRefreshByPOICollect;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)configTaskWithModel:(id)a0;
- (id)initWithPageContext:(id)a0;
- (void)__setupObserver;
- (void)__updateTransformerShowStatus:(BOOL)a0;
- (void)__didReceiveFavoriteStatusUpdatedNotifications:(id)a0;
- (long long)transformerSceneTypeWithPageType:(long long)a0;
- (void)updateTransformerDisplayPct:(double)a0;
- (void)enterToNeabry;
- (void)transformerDidLoad;
- (void)transformerDidAppear;
- (void)transformerDidDisapper;
- (BOOL)refreshTransformerIfNeededWhenTransformerShow;
- (BOOL)refreshTransformerIfNeededWhenDisplayPct90;
- (void)cardRefreshWithParams:(id)a0 refreshType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateLynxCardHeight:(double)a0 type:(long long)a1;
- (void)refreshTransformerWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)refreshTransformerWithType:(unsigned long long)a0 extraRequestParam:(id)a1 completion:(id /* block */)a2;
- (void)refreshByTransformerToolAreaChangeWithType:(unsigned long long)a0;
- (void)__didReceiveLynxBroadcastNotification:(id)a0;
- (void)refreshTransformerWithType:(unsigned long long)a0;
- (void)handleTransformerRefreshWithScene:(long long)a0;
- (long long)orderLCFrequency;
- (void)__refreshTransformerWithType:(unsigned long long)a0 sourceType:(unsigned long long)a1 usePreloadCache:(id)a2 completion:(id /* block */)a3;
- (void)__refreshTransformerWithType:(unsigned long long)a0 sourceType:(unsigned long long)a1 extraRequestParam:(id)a2 usePreloadCache:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)cancelCurrentRequest;

@end
