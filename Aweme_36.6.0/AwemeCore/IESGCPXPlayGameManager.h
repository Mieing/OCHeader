@class IESGCPCGAlertRouterImpl, IESGCPXPlayGameExternalPaymentService, NSString, IESGCPXPlayGameAPI, IESGCPXPlayGameUtil;
@protocol IESGCPCGContainerFactory, IESGCPCGInstance;

@interface IESGCPXPlayGameManager : NSObject <IESGCPCGManagerRouter, IESGCPXPlayGameInterface>

@property (retain, nonatomic) IESGCPXPlayGameUtil *util;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) IESGCPCGAlertRouterImpl *alertController;
@property (retain, nonatomic) IESGCPXPlayGameExternalPaymentService *externalPaymentService;
@property (retain, nonatomic) id<IESGCPCGContainerFactory> containerFactory;
@property (retain, nonatomic) id<IESGCPCGInstance> instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trackXPlayEvent:(id)a0 params:(id)a1;
- (id)fetchOpenInfoFromSchema:(id)a0;
- (void)createPreviewItemWithInfo:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (id)getCurrentXPlayGameTrackCommonParams;
- (void)traceXPlayEvent:(id)a0 businessType:(id)a1 eventStep:(id)a2 errcode:(long long)a3 errMsg:(id)a4 extraInfo:(id)a5;
- (BOOL)isCGInstanceRunning;
- (void)showTeenModeAlert;
- (id)instanceObjectWith:(id)a0;
- (BOOL)isCGContainerActive;
- (id)currentMetaData;
- (void)openXPlayGameWithSchemaParams:(id)a0 completion:(id /* block */)a1;
- (void)closeXPlayGame;
- (void)closeXPlayGameWithReason:(id)a0 destroyContainer:(BOOL)a1;
- (void)minimizeXPlayGame;
- (void)preloadXplayGameBeforeInit;
- (void)recordOpenXPlayGameWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)trackXPlayWithCommonParamsEvent:(id)a0 params:(id)a1;
- (void)initXPlayGamePayForGameId:(id)a0 gameName:(id)a1 orientation:(long long)a2;
- (void)xplayGamePayWithOutOrderId:(id)a0 completion:(id /* block */)a1;
- (void)onTeamPlayCloseIMReceivedMessage:(id)a0;
- (void)livePullStreamDidUpdateWithResolutionType:(id)a0;
- (void)setupOnce;
- (void)hideContainer;
- (void)closeWithMethod:(long long)a0 reason:(id)a1 destroyContainer:(BOOL)a2;
- (void)openGameVCWithModel:(id)a0;
- (BOOL)isMainRunning;
- (void)bindMainContainerWithInstance:(id)a0;
- (void)enterMainContainerWithSourcePage:(id)a0;
- (void)restartWithReason:(id)a0 permeatedInfo:(id)a1;
- (void)restartWithReason:(id)a0;
- (void)turnToFullGameWithModel:(id)a0 sourceName:(id)a1;
- (id)_getRequestId;
- (void)_openMainContainerGameWithModel:(id)a0 showContainerImmediately:(BOOL)a1;
- (void)_openMainContainerGameWithModel:(id)a0;
- (id)_prepareGameModelWithInfo:(id)a0;
- (void)_doActionWithNewModel:(id)a0 status:(long long)a1;
- (void)_doReplaceInstanceCheckWithNewModel:(id)a0 completion:(id /* block */)a1;
- (id)_appendLaunchParamsIfLost:(id)a0;
- (BOOL)_gameModel:(id)a0 isSameGame:(id)a1;
- (id)createInstanceWithModel:(id)a0;
- (void)_bindTXAccountIfNeededWithGameModel:(id)a0 completion:(id /* block */)a1;
- (id)_buildActionId;
- (void).cxx_destruct;

@end
