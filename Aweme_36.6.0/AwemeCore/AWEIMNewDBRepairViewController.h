@class DUXLoadingToast, NSString, UIImageView, NSDictionary, UILabel, UIView, UIButton;
@protocol AWEDiskExtremelyProtocol;

@interface AWEIMNewDBRepairViewController : UIViewController

@property (retain, nonatomic) UILabel *navTitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *repairButton;
@property (retain, nonatomic) UILabel *netDisconnectLabel;
@property (retain, nonatomic) UIView *progressBackView;
@property (retain, nonatomic) UIView *progressIndicatorView;
@property (retain, nonatomic) UIView *fakeProgressIndicatorView;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isCleaning;
@property (nonatomic) BOOL isRepairing;
@property (nonatomic) BOOL repairFinish;
@property (nonatomic) BOOL repairSuccess;
@property unsigned long long repairType;
@property (nonatomic) unsigned long long cleanType;
@property (copy, nonatomic) NSDictionary *textDict;
@property (nonatomic) double stillNeedSpace;
@property (nonatomic) double cacheSize;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *titleStr;
@property (retain, nonatomic) id<AWEDiskExtremelyProtocol> diskExtremely;

+ (void)p_trackWithParams:(id)a0;
+ (void)getFreeSpace:(id /* block */)a0;
+ (void)getRecoverMinSpace:(id /* block */)a0;
+ (void)cleanAppCache:(id /* block */)a0;
+ (void)startRecover:(id /* block */)a0;
+ (void)restartApp:(id /* block */)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)loadingToastWithText:(id)a0;
- (void)addNotification;
- (void)handleReachabilityChangedNotification:(id)a0;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)handleWillResignActiveNotification:(id)a0;
- (void)trackWithParams:(id)a0;
- (void)calculateCacheSize;
- (void)calculateRepairType;
- (BOOL)isFromService;
- (void)trackWithScene:(id)a0;
- (void)setupLabelText;
- (void)publishXBridgeEventWithActionType:(unsigned long long)a0 subActionType:(unsigned long long)a1 result:(long long)a2;
- (void)backBtnAction;
- (id)p_cacheSizeToUnitString:(double)a0;
- (void)startRepair;
- (void)handleReEnter;
- (void)p_dismissFrom:(id)a0;
- (void)p_repairDB;
- (void)p_cleanAppCache;
- (void)p_jumpToSystemSpace;
- (void)p_restart;
- (void)p_cleanCacheByTypeWithCompletion:(id /* block */)a0;
- (void)repairButtonAction;
- (void)showLackSpaceDialog:(double)a0;
- (void)repairFinish:(BOOL)a0;
- (void)repairButtonTouchDown;
- (void)repairButtonTouchUpOutside;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setup;

@end
