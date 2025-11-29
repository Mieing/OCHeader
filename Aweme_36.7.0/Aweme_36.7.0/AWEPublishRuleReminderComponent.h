@class NSString, AWERuleReminderInfoModel;
@protocol ACCRecordSwitchModeService, ACCRecordAutoPopupService, ACCRecordAuthService;

@interface AWEPublishRuleReminderComponent : ACCFeatureComponent <ACCRecordAutoPopupSubscriber>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordAutoPopupService> autoPopupService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) AWERuleReminderInfoModel *ruleReminderInfo;
@property (nonatomic) BOOL hasCheckedShow;
@property (nonatomic) BOOL hasShowedAuthView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)popupServiceAutoShowIfNeedWithResultCompletion:(id /* block */)a0;
- (unsigned long long)registerPopupType;
- (void)showPublishRuleHintIfNeed:(id /* block */)a0;
- (void)trackForRuleReminderUserConfirm:(id)a0;
- (void)trackForRuleReminderShow:(id)a0;
- (BOOL)shouldShowPublishRuleHint;
- (void)requestCurrentUserPunishDetailV2:(id /* block */)a0;
- (void)requestCurrentUserPunishDetail:(id /* block */)a0;
- (void).cxx_destruct;

@end
