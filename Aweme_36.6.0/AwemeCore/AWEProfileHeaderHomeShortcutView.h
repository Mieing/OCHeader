@class UIView, AWEProfileGoldIconTipView, NSString, AWEButton, AWEUserModel, NSAttributedString, AWEUIButton, AWEProfileHeaderGoldIconView;

@interface AWEProfileHeaderHomeShortcutView : UIView <AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEButton *addBtn;
@property (retain, nonatomic) AWEUIButton *editButton;
@property (retain, nonatomic) UIView *editBtnAccessView;
@property (copy, nonatomic) NSAttributedString *originalEditButtonTitle;
@property (nonatomic) BOOL canTrackAddFriendsDotImpression;
@property (nonatomic) BOOL isShowingNumbericalAddBtnDot;
@property (nonatomic) long long addBtnDotCount;
@property (nonatomic) BOOL hidePercentWhenCompleted;
@property (nonatomic) float completion;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) AWEProfileGoldIconTipView *goldIconTipView;
@property (retain, nonatomic) AWEProfileHeaderGoldIconView *addGoldIconView;
@property (nonatomic) BOOL isUpdatedGoldTask;
@property (nonatomic) double containerWidth;
@property (copy, nonatomic) id /* block */ editButtonClicked;
@property (nonatomic) BOOL showingEditGoldIconView;
@property (nonatomic) BOOL showingAddGoldIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEUserProfileModuleServiceDOUYINLiteAdaperClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)aAWEPadModuleAdapter;
- (id)aAWEUserProfileModuleServiceDOUYINLiteAdaper;
- (id)p_textColor;
- (BOOL)isTargetView:(id)a0 tapLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (void)editProfile:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateUIWithUserModel:(id)a0 containerWidth:(double)a1;
- (void)updateAddBtnYellowPointCount:(long long)a0;
- (id)currentAddFriendsDotType;
- (long long)currentAddFriendsDotNumber;
- (void)updatePadStyleButtonIfNeeded:(double)a0;
- (void)updateGoldIconTask;
- (void)finishEditTask;
- (void)finishContactsTask;
- (BOOL)p_isAddFriendsBtnNewStyle;
- (id)p_btnFont;
- (id)editButtonTitle;
- (void)p_hideAddBtnPoint;
- (void)updateAddFriendsButtonUI;
- (void)p_updateButtonColorIfNeeded;
- (void)p_setupFriendsActivityUIIfNeeded;
- (void)p_showAddFriendDotWithCount:(long long)a0;
- (void)p_trackAddFriendsImpressionIfNeeded:(id)a0 count:(long long)a1;
- (void)configEditTaskUI;
- (void)configContactsTaskUI;
- (void)hideEditTask;
- (void)hideContactsTask;
- (void)showEditTask;
- (void)showContactsTask;
- (void)refreshButtonsLayout;
- (void)p_showYellowDotOnTheRightOfButtonIfNeeded:(id)a0;
- (void)p_setupUI;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)languageDidChange;

@end
