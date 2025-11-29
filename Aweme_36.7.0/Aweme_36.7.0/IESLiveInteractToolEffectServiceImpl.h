@class IESLiveInteractPluginRequestApi, NSMutableDictionary, NSString, IESEffectModel, IESLiveAnchorInteractiveGameItem;
@protocol IESLiveInteractGameMusicDataProtocol;

@interface IESLiveInteractToolEffectServiceImpl : IESLiveGeneralBaseService <IESLiveInteractionModuleMixKTVInterfaceAction, IESLiveEffectMessageSubscriber, IESLiveAnchorRoomStatusChangeEvents, IESLiveInteractToolEffectService>

@property (retain, nonatomic) IESLiveInteractPluginRequestApi *requestApi;
@property (retain, nonatomic) NSMutableDictionary *effectDict;
@property (nonatomic) double startUseTime;
@property (retain, nonatomic) IESEffectModel *currentInteractEffect;
@property (retain, nonatomic) id<IESLiveInteractGameMusicDataProtocol> songData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *downloadingId;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *clickedItem;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceUninstall;
- (void)willStopAnchorLive;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)processInteractEffect:(id)a0 isApply:(BOOL)a1 needQuitConfirm:(BOOL)a2 forceReplaceOther:(BOOL)a3 completion:(id /* block */)a4;
- (id)currentInteractToolEffectId;
- (BOOL)musicInteractEffectIsApplying;
- (void)unApplyMusicInteractEffectWithCompletion:(id /* block */)a0;
- (void)processMusicInteractEffectForApply:(BOOL)a0;
- (void)openMusicInteractEffectKTVPanel;
- (void)recordToolUsageWith:(id)a0 use:(BOOL)a1;
- (id)currentInteractEffectItem;
- (void)trackAnchorInteractiveExtensionUse:(id)a0;
- (void)trackAnchorInteractiveExtensionOver:(id)a0;
- (void)interactGameMusicPanelDidStartIsSuccess:(BOOL)a0 songData:(id)a1;
- (void)interactGameMusicPanelDidShow;
- (void)interactGameMusicPanelDidDismiss;
- (void)handleMusicInteractEffectMsg:(id)a0;
- (void)handleScoreInteractEffectMsg:(id)a0;
- (void)trackAnchorInteractiveExtensionQuitPopup:(id)a0 clickBtnType:(id)a1 actionType:(id)a2;
- (BOOL)getConflictStatusWithItem:(id)a0;
- (void)trackConflictPopup;
- (void)quitOtherEffect;
- (void)doRemoveInteractToolEffect;
- (void)openMusicInteractEffectItem:(id)a0;
- (void)updateItem:(id)a0 downloadingID:(id)a1;
- (void)doApplyMusicInteractEffectWithItem:(id)a0;
- (void)doSelectInteractToolEffect:(id)a0;
- (void)prepareMusicInteractEffectData:(id)a0 songData:(id)a1 completion:(id /* block */)a2;
- (void)downLoadEffectWithEffectID:(id)a0 completion:(id /* block */)a1;
- (void)assemblyMusicInteractEffectData:(id)a0 songData:(id)a1 coverFilePath:(id)a2 beatsInfoDict:(id)a3 completion:(id /* block */)a4;
- (BOOL)isNormalEffectRunning;
- (BOOL)isInteractToolRunning:(id)a0;
- (void)handleUseResultWithEffect:(id)a0 isApplied:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)handleUnApplyMusicEffectIfNeeded:(id)a0;
- (void)handleApplyMusicEffectIfNeeded:(id)a0;
- (void)updateInteractEffectUseState:(id)a0;
- (void)trackMusicInteractEffectUseSuccess:(id)a0;
- (void)launchInteractToolEffect:(id)a0 uploadID:(id)a1 isApplied:(BOOL)a2 completion:(id /* block */)a3;
- (void)checkInteractToolItem:(id)a0 isApplied:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyInteractToolEffect:(id)a0 item:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
