@class IESGCPCGMembershipCardInterceptor, NSString, NSDictionary, IESGCPCGMembershipCardViewProvider, IESGCPXPlayGameAPI;

@interface IESGCPCGMembershipCardComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLaunchProcessActions, IESGCPCGMembershipCardRouter, IESGCPCGInstanceActions, IESGCPCGQueueActions, IESGCPCGLynxPaymentActions, IESGCPCGADRewardActions>

@property (retain, nonatomic) IESGCPCGMembershipCardViewProvider *membershipCardViewProvider;
@property (copy, nonatomic) NSDictionary *membershipInfo;
@property (retain, nonatomic) IESGCPCGMembershipCardInterceptor *responder;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) NSDictionary *adConfig;
@property (nonatomic) long long modifiedFreeTime;
@property (nonatomic) BOOL isRequestingModifiedFreeTime;
@property (copy, nonatomic) id /* block */ finishRequestedModifiedFreeTimeBlock;
@property (nonatomic) BOOL isShowingExpiredMembershipCard;
@property (nonatomic) BOOL hasShownADRewardLimitedDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didReceiveUserHeartbeatMessage:(id)a1;
- (void)onInitFinishedWithResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 info:(id)a3;
- (void)onExciteVideoCloseWithType:(long long)a0;
- (void)onExciteVideoCountDownEnd;
- (void)showMembershipCard;
- (id)currentMembershipInfo;
- (id)getInfoToShowADRewardAgainPopup;
- (void)componentDidAttached;
- (void)didRequestEnjoyCardInfoSuccessWithResult:(id)a0;
- (void)onQueueStartWithStatus:(id)a0;
- (void)onQueueFinish;
- (id)getTimeConfigWithCurrentCount:(long long)a0;
- (void)_updateMembershipInfoWithSource:(id)a0 info:(id)a1 action:(id)a2;
- (void)_dismissExpiredMembershipCardAndSendConsumeTimeHeartbeat;
- (void)_showRequestADRewardLimitedDialog:(long long)a0;
- (void)_reportADRewardIncreaseTimeWithRes:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2 logId:(id)a3;
- (void)requestModifyUserFreeTimeSuccessWithResult:(id)a0;
- (void)_modifyUserFreeTimeWithRetryCount:(long long)a0 completion:(id /* block */)a1;
- (void)_showExpiredMembershipCardAndSendNotConsumeTimeHeartbeat;
- (void).cxx_destruct;
- (id)init;

@end
