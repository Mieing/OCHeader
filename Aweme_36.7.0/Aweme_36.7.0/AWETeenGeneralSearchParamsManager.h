@class NSString;

@interface AWETeenGeneralSearchParamsManager : NSObject <AWEDigitalWellbeingMessage>

@property (nonatomic) double teenmodeEnterTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)p_appDidBecomeActive:(id)a0;
- (void)p_addNotification;
- (void)updateTeenmodeEnterTimeInterval;
- (double)generalSearchDuration;
- (id)init;
- (void)dealloc;

@end
