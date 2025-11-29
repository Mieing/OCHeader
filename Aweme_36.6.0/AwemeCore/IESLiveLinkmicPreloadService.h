@class UIView, IESLiveInteractPreLynxViewManager, IESLiveLinkmicPreloadApi, NSString, IESLiveAudioBackgroundViewModel, IESLiveGCDTimer, IESLiveAudioBackgroundView, HTSLiveLinkerDetail, IESLiveLinkMicAudienceEnterInfoResponse_ResponseData;
@protocol IESLiveRoomService;

@interface IESLiveLinkmicPreloadService : IESLiveGeneralBaseService <IESLiveLinkmicPreloadActions, IESLiveSocialInteractPreLoadExAction, IESLiveBannerOuterActions, IESLiveSEIListener>

@property (retain, nonatomic) IESLiveLinkmicPreloadApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> currentRoom;
@property (nonatomic) double enterRoomTimeStamp;
@property (retain, nonatomic) IESLiveLinkMicAudienceEnterInfoResponse_ResponseData *linkmicEnterInfo;
@property (retain, nonatomic) HTSLiveLinkerDetail *linkerDetail;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *bgViewModel;
@property (retain, nonatomic) IESLiveAudioBackgroundView *bgView;
@property (nonatomic) BOOL hasInitBg;
@property (nonatomic) BOOL initPreBgFail;
@property (copy, nonatomic) id /* block */ firstLinkmicSEIAction;
@property (retain, nonatomic) UIView *interactFullScreenBg;
@property (retain, nonatomic) IESLiveGCDTimer *protectTimer;
@property (retain, nonatomic) IESLiveInteractPreLynxViewManager *preLynxViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceRoomDataReady:(id)a0;
- (BOOL)isLinkmicRoom:(id)a0;
- (void)activityBannerIsOnShow:(BOOL)a0;
- (void)taskBannerIsOnShow:(BOOL)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (unsigned long long)seiDispatchPriority;
- (BOOL)enableBackupSEI;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (id)getPlayModes;
- (id)getUserLists;
- (int)getUILayout;
- (id)playmodeInfo;
- (double)getEnterRoomTimeStamp;
- (id)getPreloadBgView;
- (id)getPreloadBgViewModel;
- (BOOL)enablePreLoadBgView;
- (void)preloadLinkmicInfo:(id)a0;
- (void)preloadVideoChorusConcertLynxView;
- (void)updateRoomContainerIfNeed;
- (BOOL)preloadGuestListEnable;
- (BOOL)preloadPlayModeInfoEnable;
- (BOOL)preloadBgViewEnable;
- (void)createPreBgFail;
- (BOOL)isLinkmicRoomNeedBgPreLoad:(id)a0;
- (void)preLoadBgForInteractRoom;
- (void)removeinteractFullScreenBgUnderPlayer;
- (id)videoStreamColorWithLinkmicResult:(id)a0;
- (void)addInteractFullScreenBgUnderPlayerIfNeed;
- (void).cxx_destruct;
- (unsigned long long)getScene;

@end
