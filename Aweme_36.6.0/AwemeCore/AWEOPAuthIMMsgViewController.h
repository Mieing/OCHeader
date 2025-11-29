@class AWEUILoadingView, NSString, UIImageView, NSDictionary, UIView, UILabel, UIButton;

@interface AWEOPAuthIMMsgViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarIconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *clientIconImageView;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *attribution;
@property (retain, nonatomic) NSDictionary *dataDict;
@property (retain, nonatomic) NSDictionary *trackInfoDict;
@property (copy, nonatomic) id /* block */ completeBlock;

- (id)commonTrackInfo;
- (double)maxContentWidth;
- (void)refreshUIWithDataDict:(id)a0;
- (void)trackShowPannel;
- (void)updateDescWithIconUrl:(id)a0 clientName:(id)a1 otherText:(id)a2;
- (void)trackClickType:(long long)a0;
- (void)willDismissWithType:(long long)a0;
- (void)requestWhenClickWithType:(long long)a0 customSuccBlock:(id /* block */)a1;
- (void)showOrHideLoading:(BOOL)a0;
- (void)onClickCloseButton:(id)a0;
- (void)onClickRejectButton;
- (void)onClickOKButton:(id)a0;
- (void)dismissFromJSB;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
