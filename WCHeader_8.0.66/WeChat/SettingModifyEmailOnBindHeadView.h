@class MMUILabel, MMUIButton;

@interface SettingModifyEmailOnBindHeadView : MMAcceptAgreementCommonHeadView

@property (retain, nonatomic) MMUILabel *emailLabel;
@property (retain, nonatomic) MMUIButton *emailOperateButton;
@property (nonatomic) BOOL showFullEmail;

- (void)updateViewWithTitle:(id)a0 content:(id)a1 email:(id)a2 showEmail:(BOOL)a3;
- (void)layoutUI;
- (void).cxx_destruct;

@end
