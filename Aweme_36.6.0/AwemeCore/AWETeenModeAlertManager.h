@class NSString, UIViewController, AWETeenUnderFourTeenAlertView;

@interface AWETeenModeAlertManager : HTSService <AWEDigitalWellbeingMessage, UIViewControllerTransitioningDelegate, AWETeenUnderFourTeenProtocol>

@property (retain, nonatomic) AWETeenUnderFourTeenAlertView *currentAlertView;
@property (weak, nonatomic) UIViewController *currentVerifyViewController;
@property (nonatomic) BOOL willShowParentAlert;
@property (nonatomic) BOOL isLeaveAlertShowing;
@property (nonatomic) BOOL isEnterUnderFourTeenMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)serverTeenModeDidRecalculateUnderFourTeenTeenModeStatus:(BOOL)a0;
- (void)serverTeenModeDidChangeUnderFourTeenModeStatus;
- (void)unlockPageDidDismiss;
- (void)unlockPageWillAppear;
- (BOOL)p_isAntiAddictionViewShowing;
- (BOOL)p_isWithinAntiAddictionTime;
- (BOOL)isCertVCShowing;
- (BOOL)p_shouldShowVerifyParentsViewController;
- (void)p_addEnterUnderFourTeenTeenModeAlert;
- (void)p_showVerifyParentPage;
- (void)p_addLeaveTeenModeAlertPolling;
- (void)p_dismissVerifyViewController;
- (void)p_showVerifyParentsViewController;
- (void)p_addVerifyParentsAlert;
- (void)p_removeOtherAlert;
- (void)p_addLeaveTeenModeAlert;
- (BOOL)p_shouldShowVerifyParentsAlert;
- (void)disMissAlert;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)dealloc;

@end
