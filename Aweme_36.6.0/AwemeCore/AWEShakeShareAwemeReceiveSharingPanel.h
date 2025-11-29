@class AFDRadarShareAwemeModel, UIImageView, DUXButton, UILabel, AWEUserModel, DUXContentSheet;

@interface AWEShakeShareAwemeReceiveSharingPanel : UIViewController

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *rejectButton;
@property (retain, nonatomic) DUXButton *acceptButton;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AFDRadarShareAwemeModel *shareModel;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (nonatomic) BOOL receiving;
@property (copy, nonatomic) id /* block */ acceptBlock;
@property (copy, nonatomic) id /* block */ rejectBlock;

- (void)initView;
- (void)rejectButtonTapped;
- (void)acceptButtonTapped;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupLayout;

@end
