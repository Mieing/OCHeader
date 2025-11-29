@class NSString, DUXBasicSheet, AWEIMMessageTabEnterpriseSwitchModePopupViewModel;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabEnterpriseModeGuidePopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, DUXSheetDelegate>

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) DUXBasicSheet *basicSheet;
@property (retain, nonatomic) AWEIMMessageTabEnterpriseSwitchModePopupViewModel *viewModel;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sheetDidClickCloseButton:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)didClickCancelButton;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (BOOL)canShowPopupView;
- (void)showPopupView;
- (void)showPopupWithViewModel:(id)a0;
- (BOOL)shoudShowPopupAndLandingToEnterpriseProfessionalMode;
- (void)didClickComfirmButton;
- (void).cxx_destruct;

@end
