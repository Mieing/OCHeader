@class UILabel, UIButton, UIView;

@interface IESLiveNativeAppShelfModalDialog : UIViewController

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desc;
@property (retain, nonatomic) UIButton *noMoreButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confrimButton;
@property (retain, nonatomic) UILabel *separatorLine;
@property (retain, nonatomic) UILabel *buttonSeparatorLine;
@property (nonatomic) BOOL hasSelected;

- (void)cancelButtonDidClick:(id)a0;
- (void)noMoreButtonDidClick:(id)a0;
- (void)confrimButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;
- (void)showOnViewController:(id)a0;
- (void)setUpUI;

@end
