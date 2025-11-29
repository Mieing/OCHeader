@class DUXNavigationBar, DUXNavigationBarImageAction, NSString, UILabel, UIButton;

@interface AWENavView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ backAction;

- (void)setAlp_disableLocalizations:(BOOL)a0;
- (id)initWithTitle:(id)a0 backAction:(id /* block */)a1;
- (void)addDefaultConstraints;
- (void)setBackButtonImageColor:(id)a0;
- (void).cxx_destruct;
- (void)setTitleColor:(id)a0;
- (void)setBackButtonImage:(id)a0;
- (void)backButtonTapped:(id)a0;
- (void)_setupUI;
- (void)updateTitle:(id)a0;

@end
