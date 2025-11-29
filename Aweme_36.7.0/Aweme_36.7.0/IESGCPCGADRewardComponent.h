@class NSString;
@protocol IESGCPADRewardTask;

@interface IESGCPCGADRewardComponent : IESGCPCGInstanceBaseComponent <IESGCPADRewardDelegate, IESGCPCGADRewardRouter, IESGCPCGADRewardActions, IESGCPCGLaunchProcessActions>

@property (retain, nonatomic) id<IESGCPADRewardTask> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)createTask;
- (void)openADRewardContainer;
- (void)onADRewardTaskExciteVideoOpenSuccess;
- (void)onADRewardTaskExciteVideoCountDownEnd;
- (void)onADRewardTaskExciteVideoOpenFailureWithErrorCode:(id)a0 errorMsg:(id)a1;
- (void)onADRewardTaskExciteVideoLoadSuccess;
- (id)provideInfoToShowADRewardAgainPopup;
- (void)onADRewardTaskExciteVideoCloseWithType:(long long)a0;
- (void)createARVSourceModel:(long long)a0 adFrom:(id)a1 rit:(long long)a2 creatorType:(long long)a3;
- (void)onInitFinishedWithResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 info:(id)a3;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void).cxx_destruct;

@end
