@class NSString;

@interface AWETTMonitorComplianceAdapter : NSObject <AWEBasicModeMessage, AWEDigitalWellbeingMessage>

@property (nonatomic) unsigned long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupMonitorTag;
+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (BOOL)verifyTag:(long long)a0;
- (void)__setupMonitorTag;
- (void)__updateMonitorTag;
- (unsigned long long)__monitorTag;
- (void)dealloc;

@end
