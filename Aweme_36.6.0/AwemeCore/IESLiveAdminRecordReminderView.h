@class UIImageView, UILabel, UIButton;

@interface IESLiveAdminRecordReminderView : UIView

@property (retain, nonatomic) UIImageView *screenRecordImage;
@property (retain, nonatomic) UILabel *functionTitleLabel;
@property (retain, nonatomic) UILabel *entranceTitleLabel;
@property (retain, nonatomic) UIButton *screenRecordBtn;
@property (copy, nonatomic) id /* block */ screenRecordAction;

- (void)screenRecordBtnAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
