@class MMKV, NSTimer, NSString, UIView;
@protocol AWEHomepageLeftLoginEntranceViewProtocol, AWEHomepageLeftLoginEntranceControllerDelegate;

@interface AWEHomepageLeftLoginEntranceController : NSObject <AWEFeedThemeManagerProtocol, AWEUserMessage>

@property (nonatomic) long long entranceStyle;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSTimer *entranceTimer;
@property (nonatomic) long long showDayNum;
@property (nonatomic) long long disappearDayNum;
@property (nonatomic) double lastStateChangeTimeInterval;
@property (nonatomic) double lastInteractTimeInterval;
@property (nonatomic) BOOL isButtonAppear;
@property (nonatomic) BOOL needOpenSideBar;
@property (nonatomic) BOOL needHideOneDay;
@property (retain, nonatomic) UIView<AWEHomepageLeftLoginEntranceViewProtocol> *entranceView;
@property (weak, nonatomic) id<AWEHomepageLeftLoginEntranceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)themeDidChange:(long long)a0;
- (BOOL)enableFrequencyControl;
- (void)setupAB;
- (void)setupEntranceStatus;
- (long long)dayCountSince1970:(double)a0;
- (void)onClickLoginEntrance;
- (id)initWithShowDayNum:(long long)a0 disappearDayNum:(long long)a1 entranceStyle:(long long)a2;
- (BOOL)canShowLoginEntrance;
- (void).cxx_destruct;
- (void)dealloc;

@end
