@class NSString, AWEMessageReachSideBarBadgeUpdateTask;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachSideBarStrategyAbility : NSObject <AWEMessageReachSideBarStrategyAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) AWEMessageReachSideBarBadgeUpdateTask *lastestTask;
@property (retain, nonatomic) AWEMessageReachSideBarBadgeUpdateTask *currentWaitingTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (id)sideBarPlugin;
- (void)updateFiredResultWithTask:(id)a0;
- (void)updateHideActionRequestResult:(id)a0 task:(id)a1;
- (void)updateFailedResultWithTask:(id)a0;
- (void)updateRequestResultComponentModel:(id)a0 task:(id)a1;
- (void)sideBarBadgeDidConsume;
- (void)updateUnreadTemplateRecordWithBadgeInfo:(id)a0;
- (void)updateRequestOnAirStatusResume;
- (void)updateWithBussinessId:(id)a0 sideBarNoticeInfo:(id)a1 stratygyCompletion:(id /* block */)a2;
- (void)hideBadgeWithBussinessId:(id)a0 hideType:(long long)a1 completetion:(id /* block */)a2;
- (void)requestBadgeWithUpdateTask:(id)a0;
- (id)generateClearRedDotModelWithExtraInfo:(id)a0 bussinessId:(id)a1;
- (BOOL)noticeBadgeNeedUpdate:(id)a0;
- (void)sideBarBadgeDidHide;
- (id)getReqParamWithUpdateTask:(id)a0;
- (void)executeTaskCompletionWithResultModel:(id)a0 task:(id)a1 componentModel:(id)a2;
- (id)getExtraInfoWithJSONString:(id)a0;
- (double)lastestNoticeSendTime;
- (BOOL)requestResultNeedUpdate:(id)a0;
- (id)getNoticeTriggerEvent:(id)a0;
- (id)lastUpdateInfo;
- (BOOL)isTemplateInfoEqualTemplateA:(id)a0 templateB:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
