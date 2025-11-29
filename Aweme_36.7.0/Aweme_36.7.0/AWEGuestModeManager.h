@class NSString;

@interface AWEGuestModeManager : NSObject <AWEUserMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage, AWEGuestModeManagerProtocol>

@property (nonatomic) BOOL isGuestModeEnable;
@property (nonatomic) double lastDiggSnackbarTime;
@property (nonatomic) unsigned long long tryShowSnackbarTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL calculateGuestModeEnable;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (BOOL)satisfyFrequencyControl;
- (void)tryShowDiggSnackbarWithAwemeModel:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (BOOL)calculateGuestModeEnable;
- (void)showDiggSnackbarWithAwemeModel:(id)a0 referString:(id)a1;
- (void)recordLastDiggSnackbarTime:(double)a0;
- (void)updateGuestModeIfNeeded;
- (id)init;
- (void)setup;
- (void)loadData;

@end
