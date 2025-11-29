@class UIButton, AWEButton, NSDictionary, UILabel, YYLabel;

@interface AFDPlayRemoteEntranceViewController : AWEHalfScreenBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *instructionLabel;
@property (retain, nonatomic) AWEButton *tryBtn;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDictionary *eventParam;
@property (retain, nonatomic) NSDictionary *routeParams;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)openFriendRoomWithParam:(id)a0 status:(long long)a1 roomProvider:(long long)a2;
+ (BOOL)needShowAlertWithType:(long long)a0;
+ (BOOL)rtvFeedShareEnableWithEventParams:(id)a0;

- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (id)p_functionType;
- (id)liveAcqIntimateABConfig;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (unsigned long long)viewStyle;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)presentViewController:(id /* block */)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)containerWidth;

@end
