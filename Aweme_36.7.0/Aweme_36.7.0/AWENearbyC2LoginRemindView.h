@class UILabel, UIButton, UIView;

@interface AWENearbyC2LoginRemindView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *tipsLable;
@property (retain, nonatomic) UIButton *loginBtn;
@property (copy, nonatomic) id /* block */ clickHandler;

- (void)updateTipsWithPageType:(long long)a0;
- (void)onLoginBtnClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
