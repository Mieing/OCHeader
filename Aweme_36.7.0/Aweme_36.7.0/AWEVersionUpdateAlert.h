@class AWEVersionUpdatePopup, DUXAlertDialog, NSString, AWEVersionUpdateConfigModel;
@protocol AWEPzEngineProtocol, AWEPzComponentProtocol;

@interface AWEVersionUpdateAlert : NSObject <AWERouterInterceptorDelegate, AWEVersionUpdatePopupDelegate, AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) DUXAlertDialog *dialog;
@property (retain, nonatomic) AWEVersionUpdatePopup *popup;
@property (retain, nonatomic) AWEVersionUpdateConfigModel *config;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)delayTriggerVersionUpdateIfNeeded;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)prepareWithContext:(id)a0 onCompletion:(id /* block */)a1;
- (double)prepareTimeoutWithContext:(id)a0;
- (void)prepareTimeoutCompletedWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)viewControllerTransitionNotification:(id)a0;
- (void)showDialog;
- (BOOL)interceptorActionBeforeTransferWithURLString:(id)a0 userInfo:(id)a1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)a0;
- (id)currentAppVersion;
- (BOOL)shouldAvoidSpecialScene;
- (void)cancelBtnDidClick;
- (void)_showUpgradeModal;
- (BOOL)canShowWithUpgradeStatus;
- (void)businessPrepareWithContext:(id)a0 onCompletion:(id /* block */)a1;
- (BOOL)isTabValid;
- (BOOL)isUpgradeStatusVersionValid;
- (void)requestNewVersion;
- (BOOL)versionCompareForNeedUpgrade;
- (BOOL)checkEncryption;
- (void)updatePopupShowTrack;
- (BOOL)dialogAutoDismiss;
- (void)confirmBtnDidClick;
- (BOOL)versionLessThanWithLhs:(id)a0 rhs:(id)a1;
- (void)updatePopupClickTrackWithOperationType:(long long)a0;
- (void)closeDialogByOperationType:(long long)a0;
- (void)updatePopupTrack:(BOOL)a0 operationType:(long long)a1;
- (void)versionUpdatePopup:(id)a0 operateWithType:(long long)a1;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;

@end
