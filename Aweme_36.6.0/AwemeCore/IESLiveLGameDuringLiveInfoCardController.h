@class NSString, IESLiveLGameDuringLiveModel, IESLiveLGameDuringLiveApi, IESLiveLGameDuringLiveInfoCardView;
@protocol IESLiveLGameDuringLiveInfoCardControllerDelegate, IESHYControllerProtocol;

@interface IESLiveLGameDuringLiveInfoCardController : IESLiveLGameMaskController <IESLiveLGameDuringLiveInfoCardViewDelegate>

@property (retain, nonatomic) IESLiveLGameDuringLiveApi *networkApi;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *duringLiveModel;
@property (retain, nonatomic) IESLiveLGameDuringLiveInfoCardView *infoCardView;
@property (weak, nonatomic) id<IESHYControllerProtocol> lynxInfoController;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveInfoCardControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)openGameCameraCapture;
- (void)closeControllerWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showControllerWithCompletion:(id /* block */)a0;
- (void)updateDuringLiveModel:(id)a0;
- (void)showExitMountAlert:(id /* block */)a0;
- (void)updateExplainStatus:(unsigned long long)a0;
- (void)updateInfoCardFromServer;
- (BOOL)canHandleMethod:(id)a0;
- (id)handleMethod:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)updateChangeMoreStatus:(BOOL)a0;
- (void)fetchInstantPlayUpdateConfig:(id)a0 completion:(id /* block */)a1;
- (id)buildLandingPageTrackParams;
- (BOOL)shouldUseMorePanel;
- (void)updateInfoCard;
- (id)gameDetailLynxSchema;
- (id)infoControllerMethods;
- (id)handleMethodClickSwitch;
- (id)handleMethodClickExit;
- (id)handleMethodOpenLottery:(id)a0;
- (id)handleMethodOpenLynxDetailPage:(id)a0;
- (id)handleMethodOperateSettings:(id)a0 completion:(id /* block */)a1;
- (id)handleMethodGetPanelSettingStatus;
- (void)duringLiveInfoCardExitMountButtonClick:(id)a0;
- (void)duringLiveGameCardLotteryButtonClick:(id)a0 params:(id)a1;
- (id)handleMethodOperateCamera:(id)a0;
- (id)handleMethodOperateExplain:(id)a0 completion:(id /* block */)a1;
- (id)handleMethodOperateInstantPlay:(id)a0 completion:(id /* block */)a1;
- (id)buildOperateSettingData:(BOOL)a0 currentStatus:(BOOL)a1;
- (void)duringLiveGameCardExplainClick:(id)a0 completion:(id /* block */)a1;
- (id)buildOperateSettingData:(BOOL)a0 currentStatusInt:(long long)a1;
- (id)transferToExplainString;
- (void)duringLiveInfoCardCloseButtonClick:(id)a0;
- (void)duringLiveNetworkErrorViewRefreshButtonClick:(id)a0;
- (void)duringLiveGameCardExplainClick:(id)a0;
- (void)duringLiveGameCardLotteryButtonClick:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
