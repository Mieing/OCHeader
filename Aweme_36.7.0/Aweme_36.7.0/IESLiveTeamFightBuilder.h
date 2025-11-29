@class NSString, IESLiveTeamFightApi;
@protocol IESLiveTeamFightProvider;

@interface IESLiveTeamFightBuilder : NSObject <IESLiveTeamFightBuilderAction>

@property (retain, nonatomic) IESLiveTeamFightApi *teamFightApi;
@property (weak, nonatomic) id<IESLiveTeamFightProvider> teamFightProvider;
@property (nonatomic) double lastOperationTime;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isShowFinishToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)showToastWithMessage:(id)a0;
- (void)bindAction;
- (void)updateTeamFightInfoWithExtraObject:(id)a0;
- (id)getTeamFightInfoWithExtraObject:(id)a0;
- (void)createTeamFightWithOption:(id)a0 requestPage:(id)a1 duration:(id)a2 savedGuest:(id)a3 completion:(id /* block */)a4;
- (void)getTeamFightConfigWithCompletion:(id /* block */)a0;
- (void)startTeamFightWithCompletion:(id /* block */)a0 requestPage:(id)a1;
- (void)finishTeamFightWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)updateTeamFightPlayerTeamWithType:(int)a0 targetTeam:(int)a1 guestID:(id)a2 position:(id)a3 completion:(id /* block */)a4;
- (void)monitorReceiveFinishTeamFightIfNeed:(id)a0;
- (void)trackTeamFightFinishIfNeedWithMessage:(id)a0;
- (void)onReceivedTeamFightGuideMessage:(id)a0;
- (BOOL)isGuestMeself;
- (void)handleGetTeamFightConfigWithResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)handleCreateTeamFightWithResponse:(id)a0 error:(id)a1 option:(long long)a2 requestPage:(id)a3 requestTimestamp:(double)a4 completion:(id /* block */)a5;
- (void)handleStartTeamFightWithResponse:(id)a0 error:(id)a1 requestPage:(id)a2 requestTimestamp:(double)a3 completion:(id /* block */)a4;
- (void)handleFinishTeamFightWithResponse:(id)a0 error:(id)a1 reason:(long long)a2 requestTimestamp:(double)a3 completion:(id /* block */)a4;
- (void)trackTeamFightFinishIfNeedWithRequestPage:(id)a0 teamFightInfo:(id)a1;
- (long long)convertUpdateExtraType:(id)a0;
- (void)trackTeamFightFinishIfNeedWithRequestPage:(id)a0;
- (void)receiveTeamFightMessage:(id)a0;
- (void)receiveLinkMicGuideMessage:(id)a0;
- (BOOL)isAnchorPartWithTeamInfos:(id)a0;
- (void)monitorFinishTeamFightIfNeeded:(long long)a0;
- (void)monitorFinishTeamFightSessionIfNeeded;
- (void).cxx_destruct;

@end
