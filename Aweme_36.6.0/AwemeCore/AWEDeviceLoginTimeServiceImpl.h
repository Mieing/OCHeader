@class NSString, NSDate;

@interface AWEDeviceLoginTimeServiceImpl : HTSService <AWEDeviceLoginTimeService>

@property (retain) NSDate *lastLoginDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadLastLoginDate;
- (double)p_readLoginDate;
- (double)p_currentTime;
- (void)p_saveLoginDateWithTime:(double)a0;
- (void)updateLoginDate;
- (void).cxx_destruct;
- (id)init;

@end
