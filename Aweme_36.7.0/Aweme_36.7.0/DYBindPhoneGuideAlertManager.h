@class UINavigationController, NSString, DYABindMobileAlertModel, DYBindPhoneGuideAlertViewController;

@interface DYBindPhoneGuideAlertManager : NSObject <DYBindPhoneGuideAlertViewControllerDelegate, AWEAlertProtocol>

@property (retain, nonatomic) DYABindMobileAlertModel *model;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) DYBindPhoneGuideAlertViewController *bindViewController;
@property (copy, nonatomic) NSString *popup_type;
@property (copy, nonatomic) id /* block */ onCloseHandler;
@property BOOL isShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)p_recordShowHistory;
- (void)p_alertDismiss;
- (void)closeViewController:(id)a0;
- (void)bindPhoneNumber:(id)a0;
- (void)showBindPhoneGuideAlertIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
