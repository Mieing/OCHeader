@class DYABindMobileAlertModel, UIButton, UILabel;

@interface DYBindPhoneGuideAlertView : UIView

@property (retain, nonatomic) DYABindMobileAlertModel *model;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *contentView;
@property (retain, nonatomic) UIButton *bindButton;

- (void)loadSubViews;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
