@class UIView, NSString, AWENavigationBar, NSDictionary, AWERadarKeyboardView, AWERadarGroupEnterCommandView, CAGradientLayer, UIImageView, UILabel;
@protocol AWEIMFaceToFaceConfigProtocol, AWERadarGroupCommandViewControllerDelegate, AWEIMGroupChatMonitorProtocol;

@interface AWERadarGroupCommandViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *groupCommand;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWERadarGroupEnterCommandView *commandView;
@property (retain, nonatomic) AWERadarKeyboardView *keyboardView;
@property (nonatomic) BOOL enabletopHintMask;
@property (retain, nonatomic) UIView *hintMaskView;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL isExited;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (retain, nonatomic) id<AWEIMFaceToFaceConfigProtocol> materialInfo;
@property (retain, nonatomic) id<AWEIMGroupChatMonitorProtocol> firstFrameMonitor;
@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSString *topHintText;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWERadarGroupCommandViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_removeGroupConfirmVC;
- (void)__trackGroupFaceToFacePanelShow;
- (void)__trackPanelFirstFrame;
- (void)setupCommandView;
- (BOOL)isSpringFestivalActive;
- (void)p_transferToNextVc;
- (void)p_trackEnterConfirmVCWithExtraParams:(id)a0;
- (void)p_clearCommand;
- (void)__trackAPIEventResCode:(long long)a0 duration:(long long)a1 apiName:(id)a2;
- (void)p_transferToGroupConfirmVC;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })screenSize;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)setupKeyboard;
- (id)initWithGroupId:(id)a0;

@end
