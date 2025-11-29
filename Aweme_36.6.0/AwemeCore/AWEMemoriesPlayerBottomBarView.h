@class ACCAnimatedButton, UIView;

@interface AWEMemoriesPlayerBottomBarView : UIView

@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) ACCAnimatedButton *publishButton;

- (void)viewWillAppearWithConfigManager:(id)a0;
- (void)configWithPlayerConfigManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
