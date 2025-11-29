@class AWEProfileMoreMenuViewModel, UIImageView, AWEButton, UILabel, UIButton;

@interface AWEProfileMenuDoubleCheckViewController : AWEHalfScreenBaseViewController

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ resetSwitchBlock;
@property (retain, nonatomic) AWEProfileMoreMenuViewModel *parentViewModel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)slideDismiss;
- (void)tapDismiss;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)cancelButtonTapped;
- (double)containerHeight;
- (void)confirmButtonClicked;
- (double)containerWidth;

@end
