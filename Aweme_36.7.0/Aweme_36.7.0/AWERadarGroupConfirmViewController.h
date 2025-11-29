@class UIView, NSString, NSTimer, AFDButton, AWENavigationBar, UIImageView, AWERadarGroupEnterCommandView, NSDictionary, UIViewController, UILabel;
@protocol AWERadarNearbyItemListViewControllerProtocol, AWEIMFaceToFaceConfigProtocol;

@interface AWERadarGroupConfirmViewController : UIViewController

@property (retain, nonatomic) NSString *groupCommad;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWERadarGroupEnterCommandView *commandView;
@property (retain, nonatomic) UIViewController<AWERadarNearbyItemListViewControllerProtocol> *userListController;
@property (retain, nonatomic) AFDButton *enterButton;
@property (nonatomic) BOOL isCommandInvalid;
@property (nonatomic) BOOL willOpenClickCreateGroupButton;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) long long radarUserListCount;
@property (retain, nonatomic) NSTimer *uploadLocationTimer;
@property (nonatomic) BOOL isExited;
@property (nonatomic) BOOL hasPeople;
@property (retain, nonatomic) id<AWEIMFaceToFaceConfigProtocol> materialInfo;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (nonatomic) BOOL delayLocationRequest;
@property (copy, nonatomic) NSString *leavePageEventName;
@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSDictionary *routerParam;

- (void)awe_onReturnButtonClicked:(id)a0;
- (void)p_stopTimer;
- (void)p_startTimer;
- (void)setupCommandView;
- (BOOL)isSpringFestivalActive;
- (id)initWithGroupCommand:(id)a0 andGroupId:(id)a1;
- (void)__trackAPIEventResCode:(long long)a0 duration:(long long)a1 apiName:(id)a2;
- (void)p_removeGroupCommandVC;
- (void)p_updateUserList:(id)a0 withNoticeList:(id)a1;
- (void)p_dismissEvent;
- (void)p_startHeartBeat:(BOOL)a0;
- (void)p_removeSelfAndActivityCreateGroupVC;
- (void)p_removeSelfVC;
- (void)trackLeaveViewMethod:(id)a0;
- (void)p_exitAWERadarBuildGroup;
- (void)p_startHeartBeat;
- (void)p_setHintViewInvalid;
- (void)p_uploadLocation;
- (void)trackGroupEnterClick;
- (void)p_trackGroupCreateWithMonitor:(id)a0 response:(id)a1 error:(id)a2 extra:(id)a3;
- (void)p_trackAddFaceToFaceGroupWithResponse:(id)a0 error:(id)a1;
- (void)trackGroupCreateSucces;
- (void)trackCreateGroupWithRespModel:(id)a0;
- (void)trackEnterChat;
- (id)p_getRootVC;
- (void)p_setupUI;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)enterGroup;
- (void)p_addObservers;

@end
