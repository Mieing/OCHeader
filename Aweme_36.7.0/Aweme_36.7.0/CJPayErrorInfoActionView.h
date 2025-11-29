@class NSString, UIImageView, CJPayLoadingButton, CJPayStyleErrorLabel, MASConstraint;

@interface CJPayErrorInfoActionView : UIView

@property (retain, nonatomic) UIImageView *infoImage;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (retain, nonatomic) CJPayLoadingButton *verifyItemBtn;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MASConstraint *errorLabelRightConstraint;
@property (retain, nonatomic) MASConstraint *errorBtnRightConstraint;
@property (retain, nonatomic) MASConstraint *infoImageRightConstraint;
@property (retain, nonatomic) MASConstraint *errorLabelLeftConstraint;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long statusType;
@property (nonatomic) BOOL hasSetupUI;
@property (retain, nonatomic) NSString *action;

- (void)updateStatusWithType:(long long)a0 errorText:(id)a1;
- (void)showActionButton:(BOOL)a0;
- (void)updateStatusWithType:(long long)a0 errorText:(id)a1 icon:(id)a2;
- (void)p_bioSystemAuthority;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
