@class UIView, NSString, AWEUserModel, UIImageView, UIButton, BDPUniqueID, NSMutableArray, NSLayoutConstraint, AWEBDPCloseBtn, UILabel;

@interface AWEPluginOpenCardProfileView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UIButton *homepageBtn;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) AWEBDPCloseBtn *closeBtn;
@property (retain, nonatomic) NSLayoutConstraint *userViewTopCons;
@property (retain, nonatomic) NSLayoutConstraint *userViewBottomCons;
@property (retain, nonatomic) NSLayoutConstraint *userViewCenterCons;
@property (retain, nonatomic) NSMutableArray *heightConsArr;
@property (retain, nonatomic) AWEUserModel *currentUser;
@property (copy, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *functionFrom;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ stateChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCorner;
- (void)onTapBtn:(id)a0;
- (void)event:(id)a0 uniqueID:(id)a1 param:(id)a2;
- (void)setInfo:(id)a0 withViewController:(id)a1;
- (void)onDimmingViewTap:(id)a0;
- (void)showUserView:(BOOL)a0;
- (void)showFollowBtn:(BOOL)a0;
- (id)getTagLabel;
- (void)onGameExit;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)showFromViewController:(id)a0;

@end
