@class UIWindow, UIImageView, UILabel, UIView, UIButton;

@interface CSJRewardBrowseAlertView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *msgLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIWindow *bgWindow;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)closeBtnClicked;
- (void)confirmBtnClicked;
- (id)initWith:(id)a0 msg:(id)a1;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
