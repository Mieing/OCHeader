@class UILabel, UIButton;

@interface AWEVideoHallPannelNaviBarView : UIView

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIButton *backButton;
@property (copy, nonatomic) id /* block */ backBtnBlock;

- (void)handleBackButton;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
