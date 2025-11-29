@class NSString;

@interface AWEUGFirstInstallServiceImp : HTSService <AWEUGFirstInstallService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordColdLaunch;
- (id)firstColdLaunchTime;
- (BOOL)isFirstUGColdLaunch;
- (void)recordFirstUGColdLaunch;
- (BOOL)isFirstColdLaunch;

@end
