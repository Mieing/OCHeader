@class NSString, NSArray, AWEPageContext, UIView, UIButton;

@interface AWEIMFansContainerViewController : UIViewController <AWEIMMessageTabPadSplitSecondaryViewController, AWERouterViewControllerProtocol, AWEIMFansAndInteractMergedNaviProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ruleId;
@property (copy, nonatomic) NSString *showedUserIDs;
@property (copy, nonatomic) NSString *gdLabel;
@property (retain, nonatomic) UIButton *fansToolBtn;
@property (retain, nonatomic) UIView *yellowDot;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) NSArray *naviBarRightButtons;
@property (nonatomic) BOOL isForMergedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENoticeModuleServiceDOUYINDSAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)showNaviInContainerView:(id)a0 naviItemView:(id)a1;
- (void)didFirstTimeLoadPage;
- (unsigned long long)bizLine;
- (id)bizIdentifier;
- (void)__addObservers;
- (void)backBtnClicked:(id)a0;
- (void)__enterFansTool;
- (void)__fansToolDidEnter;
- (void)__addChildVC;
- (id)aAWENoticeModuleServiceDOUYINDSAdapter;
- (void)__addNavigationBar;
- (id)__viewControllerTitle;
- (void)__showActionSheet:(id)a0;
- (void)__hideYellowDot;
- (BOOL)__canShowYellowDot;
- (void)__enterFindFriends;
- (void)__enterPrivacySettings;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
