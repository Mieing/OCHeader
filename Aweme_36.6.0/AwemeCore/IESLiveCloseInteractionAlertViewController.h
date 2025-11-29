@class UILabel, UIButton, UIView;

@interface IESLiveCloseInteractionAlertViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeInteractionButton;
@property (retain, nonatomic) UIButton *closeLiveButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ closeLiveBlock;
@property (copy, nonatomic) id /* block */ closeInterActionBlock;

- (void)tapCloseInterActionButton;
- (void)tapCloseLive;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)dismissVC;
- (void)layoutUI;

@end
