@class AWEElderModeAlertView, MMKV, NSString;

@interface AWEElderModeAlertManager : NSObject <AWEAlertProtocol>

@property (nonatomic) double lastAlertTime;
@property (nonatomic) long long coldLaunchCounts;
@property (nonatomic) BOOL hasShown;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long userType;
@property (retain, nonatomic) AWEElderModeAlertView *alertView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)referString;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)updateColdLaunchCounts;
- (void)updateUserType;
- (void)showElderModeAlert;
- (void)showElderModeAlertWithPolling;
- (void)clickOpenElderMode;
- (void)updateLastAlertTime;
- (void)triggerElderModeAlert;
- (BOOL)isAlertShowing;
- (void).cxx_destruct;
- (id)init;

@end
