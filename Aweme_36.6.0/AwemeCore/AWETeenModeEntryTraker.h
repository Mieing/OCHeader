@class NSString, AWETeenModeBadPopViewTracker;

@interface AWETeenModeEntryTraker : NSObject <AWEDigitalWellbeingMessage>

@property (nonatomic) BOOL teenModeStatusChangeBeforLaunch;
@property (retain, nonatomic) AWETeenModeBadPopViewTracker *badPopViewTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)changeTrackerStatusForTeenModeEnable:(BOOL)a0;
- (void)p_trackTeenModeStatus:(BOOL)a0;
- (void)trackTeenModeLaunchOfCode;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
