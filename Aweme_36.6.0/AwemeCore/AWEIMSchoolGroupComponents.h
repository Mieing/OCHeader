@class AWEIMSchoolGroupManager, NSString, AWEIMStorage;

@interface AWEIMSchoolGroupComponents : AWEIMComponentBase <AWEIMSchoolGroupVerifyPanelService, AWEIMSchoolGroupVerifyService>

@property (retain, nonatomic) AWEIMStorage *storage;
@property (retain, nonatomic) AWEIMSchoolGroupManager *manager;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (double)showTimeoutWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)componentDidMounted:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (BOOL)__isEnableToNotifyVerify;
- (id)__conversation;
- (void)__refreshLastNotifyVerifyTimestamp;
- (BOOL)__lastNotiVerifyTimeIsValid;
- (double)__lastNotifyVerifyTimeStamp;
- (id)__verifyStorageKey;
- (void).cxx_destruct;
- (id)init;

@end
