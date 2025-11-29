@class NSString;

@interface AWECoCreatorManager : NSObject <AWECoCreatorManagerProtocol>

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasCache;
@property (nonatomic) BOOL hasCoCreatePermission;
@property (copy, nonatomic) NSString *cachedUserId;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) BOOL coCreatorPannelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINAdaperClass;
+ (id)sharedManager;

- (id)referString;
- (id)trackParamsOfCoCreator:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINDSAdapter;
- (id)aAWEFeedModuleServiceDOUYINAdaper;
- (void)resetPreventFeedPauseState;
- (void)checkCoCreatorsLiveStatusWithModel:(id)a0;
- (double)checkCoCreatorsLiveStatusTimeGap;
- (void)trackAcceptCoCreator:(id)a0 fromPage:(id)a1 enterMethod:(id)a2;
- (void)requestCoCreatorWithAccpet:(BOOL)a0 model:(id)a1 fromPage:(id)a2 completion:(id /* block */)a3;
- (void)trackRefuseCoCreator:(id)a0 fromPage:(id)a1 enterMethod:(id)a2;
- (void)monitorCoCratorInviteType:(id)a0 fromPage:(id)a1 responseModel:(id)a2 error:(id)a3 model:(id)a4;
- (id)coCreatorSpecificViewWithBottomPadding:(BOOL)a0;
- (void)trackCoCreatorPanelShowWithCoCreatorPermission:(BOOL)a0;
- (BOOL)shouldCheckCoCreatorsLiveStatus;
- (id)extraParamsForCheckLiveWithModel:(id)a0;
- (id)closedRoomListWithModel:(id)a0;
- (void)callLiveStatusChangedMessageWithUserList:(id)a0;
- (id)trackParamsOfCoCreator:(id)a0 logExtraDict:(id)a1;
- (BOOL)isAuthor:(id)a0;
- (BOOL)isCoCreator:(id)a0;
- (BOOL)isCoCreatorInviting:(id)a0;
- (BOOL)shouldUseUnifiedAvatarElement;
- (void)acceptCoCreator:(id)a0 fromPage:(id)a1 enterMethod:(id)a2 willRequestHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)refuseCoCreator:(id)a0 fromPage:(id)a1 enterMethod:(id)a2 willRequestHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)monitorParamsOfCoCreator:(id)a0;
- (id)coOperationTextForCreatorTagWithModel:(id)a0;
- (id)userModelForCoCreatorModel:(id)a0;
- (id)coCreatorModelsForModel:(id)a0 referString:(id)a1 enterFrom:(id)a2 postUser:(id)a3;
- (BOOL)shouldShowCoCreatorInfoWithModel:(id)a0 context:(id)a1;
- (BOOL)shouldShowChapterEntranceWithModel:(id)a0 context:(id)a1;
- (void)requestCoCreatePermission;
- (void)showCoCreatorInfoPanelFrom:(long long)a0 confirmCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
