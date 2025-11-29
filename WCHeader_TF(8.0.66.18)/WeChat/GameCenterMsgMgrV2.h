@class NSString, GCCommonServer, GamePullMsgControlInfo, NSMutableSet, MessageExposureStrategyControl, GameCenterBaseMsg, GCMRedpointExposureControlModel;

@interface GameCenterMsgMgrV2 : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) GameCenterBaseMsg *findFriendMsg;
@property (retain, nonatomic) NSMutableSet *allAvailableMsg;
@property (retain, nonatomic) GCMRedpointExposureControlModel *controlInfo;
@property (retain, nonatomic) MessageExposureStrategyControl *strategyControl;
@property (retain, nonatomic) GameCenterBaseMsg *curQueue0Msg;
@property (retain, nonatomic) GCCommonServer *server;
@property (retain, nonatomic) GamePullMsgControlInfo *pullMsgControlInfo;
@property (nonatomic) BOOL dataHasLoaded;
@property (nonatomic) BOOL userHasLogout;
@property (retain, nonatomic, setter=setCurrentShowMsgID:) NSString *currentShowMsgID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearData;
- (void)regetCurrentFindFriendMsg;
- (void)checkGameLifeRedPointExit;
- (BOOL)checkCurrenFindFriendMsgExit:(BOOL)a0;
- (void)cleanCurrentFindEntry:(long long)a0;
- (void)onFindFriendMsgExit:(id)a0;
- (BOOL)handleNewScoreLogic;
- (void)chooseNewFindMsg:(id)a0 reason:(long long)a1;
- (void)onUpdateGameCenterEntrance;
- (long long)getSecondsPassToday;
- (void)checkPullMessage;
- (BOOL)isCurrentRedPointNotEnough;
- (void)upddateRedPointExposure;
- (void)checkNeedReportEmptyRedpoint;
- (id)checkAllAvailableMsg;
- (id)getMaxScoreMsg;
- (float)calcluateMsgScore:(id)a0;
- (float)getFactorWithParameter:(double)a0 boundaryArgList:(id)a1;
- (void)asyncReGetDbQueue1Array:(id)a0;
- (id)fetchFromDbMsg;
- (BOOL)checkCanRescore;
- (void)updateHistoryScoreWithMsg:(id)a0;
- (void)handleNewMsgReceived:(id)a0;
- (void)onReceiveNewGameLifeRedPoint:(id)a0;
- (void)onGameLifeRedPointExit:(id)a0 reason:(id)a1;
- (void)handleMsgExit:(id)a0 reason:(id)a1;
- (void)updateMsgCanNotShow:(id)a0 reason:(id)a1;
- (void)onClickRedPoint;
- (void)onClearFindFriendMsg:(long long)a0;
- (void)pullUserMessage:(id)a0;
- (void)onChooseRedddot:(id)a0;
- (void).cxx_destruct;

@end
