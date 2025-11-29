@class NSString;

@interface AWEStudioModule : NSObject <InstallAndDeviceIDMessage, AWEVideoRecorderMessage, HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL downloadedResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calculateTimestampDiffFromAppDidBecomeActive;
+ (long long)calculateClickShootTimestampDiffWhenClickPublish;

- (void)onAppDidBecomeActive;
- (void)videoRecorderWouldAppear;
- (void)onHandleEventsForBackgroundURLSession;
- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;

@end
