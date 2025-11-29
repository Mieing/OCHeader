@class IESGCPPreSteamParamsModel, IESGCPRequestStrategyDispatcher, NSString;

@interface IESGCPAudienceEntranceWidget : IESGCPBaseWidget <IESGCPAudienceEntranceRouter>

@property (nonatomic) BOOL hasReportShowEventFirstTime;
@property (copy, nonatomic) IESGCPPreSteamParamsModel *preStreamParams;
@property (retain, nonatomic) IESGCPRequestStrategyDispatcher *requestDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerDataConnectionWithActionType:(unsigned long long)a0 extra:(id)a1;
- (void)widgetBindService;
- (void)entranceDidClickWithIsMore:(BOOL)a0;
- (void)entranceDidShowWithIsMore:(BOOL)a0 isFromIM:(BOOL)a1;
- (void)entranceDidDismissWithIsMore:(BOOL)a0;
- (void)entranceComponentDidAppear;
- (void)entranceDidMoveToMorePanel;
- (id)toolbarHandleGameMetaData;
- (void)trackEntranceShowEventWithIsMore:(BOOL)a0;
- (void)preloadInteractGameIfNeeded;
- (void)handleInnerParamsFromPreviewStream;
- (void)trackEntranceDismissEventWithIsMore:(BOOL)a0;
- (void)trackEntranceClickEventWithIsMore:(BOOL)a0;
- (void)openLiveRoomInLivePreviewStream;
- (void)openGameDetailPageWithIsMore:(BOOL)a0 isPreStreamClick:(BOOL)a1;
- (void)reportEntranceModuleShowEventV2:(BOOL)a0;
- (id)toolbarHandleMiniPlayData;
- (void)reportEntranceModuleClickEventV2:(BOOL)a0;
- (void)attributionLiveSceneWithComponentAction:(unsigned long long)a0 componentType:(unsigned long long)a1 location:(id)a2 extra:(id)a3;
- (void)reportEntranceModuleDurationEventV2:(BOOL)a0;
- (id)schemaOfAudienceGameDetailWithGameId:(id)a0 promoterId:(id)a1 roomId:(id)a2 enterFrom:(id)a3 gameStage:(long long)a4 bizMode:(id)a5 defaultTabId:(id)a6 promoteInstanceID:(id)a7 reportParams:(id)a8 promoteScene:(unsigned long long)a9 isLivecellReport:(long long)a10;
- (void)reportEntranceModuleEventV2:(long long)a0 isMore:(BOOL)a1 moduleAttr:(id)a2;
- (void).cxx_destruct;

@end
