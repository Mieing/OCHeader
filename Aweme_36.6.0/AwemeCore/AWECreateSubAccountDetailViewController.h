@class NSString, NSMutableSet, UIImage, UIView;
@protocol AWECreateSubAccountDetailViewProtocol;

@interface AWECreateSubAccountDetailViewController : UIViewController <AWECreateSubAccountDetailViewDelegate>

@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentNickName;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *subNickName;
@property (retain, nonatomic) NSMutableSet *checkedNickNames;
@property (retain, nonatomic) UIImage *avatarImage;
@property (nonatomic) BOOL becomedFirstResponder;
@property (retain, nonatomic) UIView<AWECreateSubAccountDetailViewProtocol> *createSubAccountDetailView;
@property (retain, nonatomic) id subAvatarUrlImageOrNull;
@property (nonatomic) BOOL needShowDefaultSubAvatarUrlImage;
@property (copy, nonatomic) NSString *defaultNickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)backBtnTapped;
- (void)chooseAvatarAction;
- (void)nameChangedWith:(id)a0 defaultNickName:(id)a1;
- (void)createSubAccountFinished;
- (void)createNewAccountWith:(id)a0;
- (void)checkNickName;
- (void)handleError:(id)a0 description:(id)a1;
- (void)uploadImageThenLogin:(id)a0;
- (void)updateUserProfileWith:(id)a0 phoneNumber:(id)a1;
- (void)finishLogin;
- (void)checkShowDefaultSubAvatarUrlImage;
- (void)closeAccountView;
- (id)initWithTicket:(id)a0 enterFrom:(id)a1 currentNickName:(id)a2 layoutStyle:(long long)a3;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)submit;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupSubviews;
- (void)setupNavigationBar;

@end
