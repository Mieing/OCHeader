@class NSString, AWEUserModel, AWEConcernBellPushSettingPanelPermissionView, AFDModalViewHelper, AWEConcernBellPushSettingPanelSectionView, UIButton, UILabel, UIScrollView;

@interface AWEConcernBellPushSettingPanelViewController : UIViewController <AWEPanelTransitionWithBackground, AWEConcernBellPushSettingPanelSectionViewDelegate>

@property (retain, nonatomic) AFDModalViewHelper *halfModalViewHelper;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelPermissionView *systemPermissionView;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelSectionView *videoSectionView;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelSectionView *liveSectionView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long userFollowStatus;
@property (retain, nonatomic) AWEUserModel *toUser;
@property (nonatomic) BOOL needCheckPermissionWhenApplicationDidBecomeActive;
@property (copy, nonatomic) id /* block */ viewDidDisappear;
@property (copy, nonatomic) NSString *trackParaEnterFrom;
@property (copy, nonatomic) NSString *trackParaEnterMethod;
@property (nonatomic) long long isGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)wantsDimmingTransitionBackground;
- (id)aweui_emptyPageBelowView;
- (id)initWithToUser:(id)a0 isGuide:(long long)a1 trackParaEnterFrom:(id)a2 trackParaEnterMethod:(id)a3 viewDidDisappear:(id /* block */)a4;
- (void)bellPushReachTheUpperLimit:(id)a0;
- (void)handleApplicationDidBecomeActiveNotification;
- (double)heightForHalfContent;
- (void)openPermissionIfNeededWithIgnoreSystemPush:(BOOL)a0;
- (void)handleForOpenPermissionEnd:(BOOL)a0;
- (void)hideNeteorkErrorEmptyPageView;
- (void)trackNewVideoNotificationClickWithStrategy:(unsigned long long)a0;
- (void)updateUIWithCurrentPermissionStatus;
- (void)showNeteorkErrorEmptyPageView;
- (id)titleForSystemPermissionWithSystemEnable:(BOOL)a0 douyinEnable:(BOOL)a1 releationEnable:(BOOL)a2;
- (void)p_clickCloseButton:(id)a0;
- (void).cxx_destruct;
- (void)fetchData;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupViews;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
