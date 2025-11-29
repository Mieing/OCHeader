@class NSString, UIImageView, TTTAttributedLabel, UILabel, UIButton;

@interface AWECancelDeleteAccountViewController : UIViewController <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TTTAttributedLabel *contentLabel;
@property (retain, nonatomic) UIButton *logoutButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL smallScreen;
@property (copy, nonatomic) id /* block */ logoutBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL isLegalCancelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)initBodyLabel;
- (void)_logoutAction;
- (id)initWithLogoutAction:(id /* block */)a0 cancelAction:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_cancelAction;
- (id)_createButton;
- (void)setUpUI;

@end
