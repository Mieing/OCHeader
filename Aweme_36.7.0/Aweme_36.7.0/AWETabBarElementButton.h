@class UIImageView, AWETabBarElementButtonViewModel, UILabel;

@interface AWETabBarElementButton : UIButton

@property (retain, nonatomic) AWETabBarElementButtonViewModel *viewModel;
@property (retain, nonatomic) UIImageView *elementIcon;
@property (retain, nonatomic) UILabel *elementLabel;
@property (nonatomic) BOOL isFold;

- (void)clickButton;
- (void)p_refreshLayout;
- (void)p_refreshUI;
- (void)changeFoldState:(BOOL)a0;
- (void)refreshViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
