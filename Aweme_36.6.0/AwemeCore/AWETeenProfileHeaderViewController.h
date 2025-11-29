@class NSString, AWETeenDYProfileHeaderView, AWEAwemeModel, UIView, AWEUserModel, NSDictionary;
@protocol AWETeenProfileHeaderViewControllerDelegate;

@interface AWETeenProfileHeaderViewController : UIViewController <AWEHeaderViewActionDelegate, AWEUserMessage, UIGestureRecognizerDelegate>

@property (nonatomic) long long profileType;
@property (nonatomic) BOOL fromHomePage;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWETeenProfileHeaderViewControllerDelegate> delegate;
@property (retain, nonatomic) AWETeenDYProfileHeaderView *profileHeaderView;
@property (nonatomic) BOOL isUserInfoFetched;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)handleTapOnContent:(id)a0;
- (void)configWithUser:(id)a0;
- (void)changeSlidingTabWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (void)configWithUser:(id)a0 isLogSent:(BOOL)a1;
- (void)showProfileInfoCompletionAnimation;
- (void)p_addObervers;
- (void)p_removeObervers;
- (void)updateHeaderHeight;
- (id)initWithUserID:(id)a0 profileType:(long long)a1 fromHomePage:(BOOL)a2;
- (void)setTabbarViewForHeaderView:(id)a0;
- (void)addTapGestureOnContentViewForHeaderView:(id)a0;
- (double)socialStatisticViewTopOfHeaderView;
- (double)avatarBottomOfHeaderView;
- (void)refreshAlphaForHeaderView:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrameOfHeaderView;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (double)headerViewHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateUser:(id)a0;

@end
