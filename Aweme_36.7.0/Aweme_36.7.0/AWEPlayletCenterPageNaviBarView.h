@class UIButton, UILabel;

@interface AWEPlayletCenterPageNaviBarView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *vipButton;
@property (copy, nonatomic) id /* block */ backBtnTapAction;
@property (copy, nonatomic) id /* block */ searchBtnTapAction;
@property (copy, nonatomic) id /* block */ vipBtnTapAction;

- (void)backButtonDidClick;
- (void)searchButtonDidClick;
- (void)vipButtonDidClick;
- (void)addVipIcon;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
