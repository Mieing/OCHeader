@class NSString, UILabel, AFDVideoPrivacyButtonController, UITapGestureRecognizer;

@interface AFDVideoPrivacyBottomView : UIView

@property (retain, nonatomic) UILabel *privacySettingTipsLabel;
@property (retain, nonatomic) AFDVideoPrivacyButtonController *privacyButtonController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;

- (void)updateWithAweme:(id)a0;
- (void)didTapPrivacySetting:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
