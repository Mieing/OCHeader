@class NSString;

@interface AWEMayDayActivityManager : NSObject <AWEAppAwemeSettingMessage, AWEDigitalWellbeingMessage, AWEMotionItemConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (id)init;
- (void)dealloc;

@end
