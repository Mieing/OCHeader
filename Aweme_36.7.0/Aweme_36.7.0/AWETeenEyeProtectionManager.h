@class NSString, UIView;

@interface AWETeenEyeProtectionManager : NSObject <AWEDigitalWellbeingMessage>

@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) BOOL eyeProtectionRemindOn;
@property (nonatomic) BOOL eyeProtectionOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)turnOnEyeProtectionModeIfNeeded;
- (void)turnOffEyeProtectionModeIfNeeded;
- (void)toggleEyeProtectionMode;
- (void)toggleEyeProtectionRemindMode;
- (void)turnOnEyeProtectionModeWhenAppStartIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
