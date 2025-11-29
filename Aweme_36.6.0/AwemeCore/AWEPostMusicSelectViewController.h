@class DUXButton, UIView;

@interface AWEPostMusicSelectViewController : AWEMusicSelectContainerViewController

@property (retain, nonatomic) DUXButton *finishButton;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (copy, nonatomic) id /* block */ completeSelectBlock;

- (void)setAddMusicNum:(long long)a0;
- (long long)topViewStyle;
- (void)p_completeSelect;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (id)subTitle;
- (void)viewDidLoad;

@end
