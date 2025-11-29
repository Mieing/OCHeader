@class NSString, MMUIViewController, UIView, GameCenterMsgListInteractTabViewController, MMUIButton;

@interface GameLifeChatViewControllerV3 : GCReportBaseVc <IGameCenterMsgNotifyExt>

@property (weak, nonatomic) MMUIButton *currentTitleButton;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) GameCenterMsgListInteractTabViewController *interactTabVc;
@property (retain, nonatomic) MMUIViewController *chatVc;
@property (weak, nonatomic) MMUIViewController *currentTabVc;
@property (retain, nonatomic) MMUIButton *tabButtonLeft;
@property (retain, nonatomic) MMUIButton *tabButtonRight;
@property (nonatomic) unsigned int sourceScene;
@property (retain, nonatomic) NSString *focusMsgId;
@property (nonatomic) BOOL isInTab;
@property (nonatomic) double tabbarHeight;
@property (nonatomic) unsigned long long selectTab;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)dealloc;
- (void)unregisterExtension;
- (void)determinDefaultSelectTab;
- (void)chooseTab:(unsigned long long)a0;
- (void)chooseTab:(unsigned long long)a0 isInit:(BOOL)a1;
- (void)setupTitleButtons;
- (void)onGameCenterMessageRedPointInfoChange:(id)a0;
- (void)updateMessageRedPoint;
- (void)setBadgeViewWithCount:(unsigned long long)a0 hasRedDot:(BOOL)a1 atView:(id)a2;
- (void)clickTitleLeft:(id)a0;
- (void)clickTitleRight:(id)a0;
- (void)setCurrentTitleButton:(id)a0 isInit:(BOOL)a1;
- (double)visableHeight;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
