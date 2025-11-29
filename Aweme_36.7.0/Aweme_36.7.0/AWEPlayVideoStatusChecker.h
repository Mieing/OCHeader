@class AWEPlayVideoViewController, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEIronManModuleService;

@interface AWEPlayVideoStatusChecker : NSObject

@property (retain, nonatomic) NSMutableArray *playVideoViewControllers;
@property (retain, nonatomic) NSMutableArray *activePlayVideoViewController;
@property (weak, nonatomic) AWEPlayVideoViewController *lastPlayVideoViewController;
@property (nonatomic) long long playVideoViewControllerCount;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double lastCheckTimestamp;
@property (weak, nonatomic) id<AWEIronManModuleService> ironManService;
@property (nonatomic) double bkgStartInterruptionTimestamp;
@property (copy, nonatomic) NSString *lastSavedCategory;
@property (nonatomic) unsigned long long lastSavedOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *focusResignQueue;
@property (readonly, nonatomic) long long videoPlayerCount;

+ (id)sharedInstance;

- (void)checkAfterPlay;
- (void)didReceiveMemoryWarningNotification;
- (id)findLastActivePlayVideoViewControllerWithCondition:(id /* block */)a0;
- (BOOL)isAnyPlaying;
- (BOOL)backgroundAudioCanRecoverable;
- (BOOL)canInactiveForegroundAudio;
- (void)startAudioBackgroundInterruption;
- (BOOL)canRecoverBackgroundAudioPlay;
- (BOOL)isValidPlaying;
- (void)increasePlayVideoViewControllers;
- (void)decreasePlayVideoViewControllers;
- (void)updatePauseStatusWithPlayer:(id)a0;
- (void)updatePlayStatusWithPlayer:(id)a0;
- (BOOL)isInForbidPage;
- (BOOL)isInForbidReferString;
- (void)debugRecordRetrunAudioFocusError:(id)a0 scene:(id)a1;
- (void)debugRecordTimestampForKey:(id)a0;
- (id)audioInterruptExpDict;
- (unsigned long long)audioInterruptExpType;
- (long long)maxBKGAudioInterruptInterval;
- (void)checkBeforePlay;
- (unsigned long long)remoteControlExpType;
- (long long)debugActivePlayVCCount;
- (long long)debugActivePlayerCount;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)dealloc;

@end
