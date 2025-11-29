@class NSArray, NSString;

@interface AWEIMMessageListLiveGroupPeopleCountComponent : AWEIMMessageListTopFloatingBaseComponent <AWEIMLiveGroupInfoManagerDelegate, AWEIMTopNoticeTipInteractorProtocol>

@property (nonatomic) long long livePeopleCount;
@property (copy, nonatomic) NSArray *groupUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldEnableInteractorWith:(id)a0;
+ (BOOL)closedNoticeTipWithin24Hours:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (void)updateLiveGroupInfoForConversationId:(id)a0 numberOfPeople:(long long)a1 groupUsers:(id)a2;
- (void)possiblyStartPollingLiveGroupInfo;
- (void)stopPollingLiveGroupInfo;
- (void)dismissAccordingToShowState;
- (void)showLiveGroupPeopleCountWithNumberOfPeople:(long long)a0 groupUsers:(id)a1;
- (BOOL)shouldUpdateWithNumberOfPeople:(long long)a0 groupUsers:(id)a1;
- (void)updateViewWithNumberOfPeople:(long long)a0 groupUsers:(id)a1;
- (void)trackActionBtnShowed;
- (void)showPeopleCountNoticeTip;
- (id)parentViewControllerCid;
- (void)trackActionBtnClicked;
- (void).cxx_destruct;
- (id)userType;
- (id)init;
- (id)params;
- (id)leftView;
- (id)visibleConversations;

@end
