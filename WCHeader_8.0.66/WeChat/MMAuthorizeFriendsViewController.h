@class UIButton, NSString, OauthScopeInfo, UIScrollView, MMWebImageView, MMUILabel;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeFriendsViewController : MMUIViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) MMWebImageView *appIconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *scopeLabel;
@property (retain, nonatomic) UIButton *comfirmBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) MMUILabel *cloudGameScopeLabel;
@property (retain, nonatomic) NSString *cloudGameScopeWording;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) OauthScopeInfo *scopeInfo;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;
@property (nonatomic) unsigned int fromScene;

- (id)initWithAppName:(id)a0 iconUrl:(id)a1 scopeInfo:(id)a2 cloudGameScopeWording:(id)a3;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onReturn;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void).cxx_destruct;

@end
