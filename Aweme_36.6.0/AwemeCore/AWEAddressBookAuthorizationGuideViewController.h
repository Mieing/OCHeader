@class UIImageView, DYLoginNextActionButton, UILabel, UIView, AWEFindFriendsLoginGuideConfigModel;

@interface AWEAddressBookAuthorizationGuideViewController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *contactImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DYLoginNextActionButton *viewButton;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) AWEFindFriendsLoginGuideConfigModel *configModel;

- (void)skipAction;
- (void)uploadAddressBookAuthorization;
- (id)initWithFinishBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)viewAction;

@end
