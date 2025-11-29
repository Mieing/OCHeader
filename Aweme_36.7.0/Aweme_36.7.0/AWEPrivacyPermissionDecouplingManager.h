@class NSString;

@interface AWEPrivacyPermissionDecouplingManager : NSObject <AWEPrivacyPermissionDecouplingManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDuetDecouplingTipsPopupWithPrivacyType:(long long)a0 originalDuetPermission:(long long)a1 duetPermission:(long long)a2;
+ (BOOL)showDuetDecouplingTipsPopupWithPrivacyType:(long long)a0 confirmBlock:(id /* block */)a1 enterMethod:(id)a2 enterFrom:(id)a3;
+ (BOOL)shouldShowStoryShareDecouplingTipsPopupWithPrivacyType:(long long)a0 originalStorySharePermission:(long long)a1 storySharePermission:(long long)a2;
+ (BOOL)showStoryShareDecouplingTipsPopupWithPrivacyType:(long long)a0 confirmBlock:(id /* block */)a1 enterMethod:(id)a2 enterFrom:(id)a3;
+ (BOOL)shouldShowDownloadDecouplingTipsPopupWithPrivacyType:(long long)a0 originalDownloadPermission:(long long)a1 downloadPermission:(long long)a2;
+ (BOOL)showDownloadDecouplingTipsPopupWithPrivacyType:(long long)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 enterMethod:(id)a3 enterFrom:(id)a4;
+ (long long)decouplingPopupForPrivateAccountShowTimes;
+ (long long)decouplingHintForPrivateAccountShowTimes;
+ (long long)duetDecouplingTipsPopupShownTimes;
+ (long long)storyShareDecouplingTipsPopupShownTimes;
+ (long long)downloadDecouplingTipsPopupShownTimes;
+ (void)updateDecouplingPopupForPrivateAccountShowTimes;
+ (void)updateDuetDecouplingTipsPopupShownTimes;
+ (void)updateStoryShareDecouplingTipsPopupShownTimes;
+ (void)updateDownloadDecouplingTipsPopupShownTimes;
+ (id)privacyDecoulingHintText;
+ (void)updateDecouplingHintForPrivateAccountShowTimes;
+ (void)showDecouplingPopupForPrivateAccountWithConfirmBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 confirmText:(id)a2 enterMethod:(id)a3;
+ (id)currentUser;


@end
