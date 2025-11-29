@class AWEIMSwitchMesssageTabModeEnterprisePopupView, NSString;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMSwitchEnterpriseModePopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, AWEIMSwitchEnterpriseModePopupInterface, DUXSheetDelegate>

@property (weak, nonatomic) AWEIMSwitchMesssageTabModeEnterprisePopupView *popup;
@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (BOOL)canShowPopupView;
- (void)showSwitchEnterpriseModePopup;
- (void).cxx_destruct;

@end
